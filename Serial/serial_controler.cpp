#include "serial_controler.h"
#include "ui_serial_controler.h"
#include<QTimerEvent>

//配置文件
#include <QFileDialog>
#include <QFileDevice>
#include <QFile>
#include <QMessageBox>
#include <QtEvents>
#include <QTextStream>
#include<QString>

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonValue>
#include <QString>
#include <QDebug>
#include <QFile>
#include <QDateTime>
#include <QDir>
#include <QThread>


static int a;
static int c;
static int b;
static int flage_changeTimer=0;
static int flage_ResetOrLoad=0;//标志位复位配置还是载入


#define  readDATA


QByteArray TimerData_1,TimerData_2,TimerData_3,TimerData_4,TimerData_5,TimerData_6;


Serial_Controler::Serial_Controler(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Serial_Controler)
{
    ui->setupUi(this);


    SERIAL_Init();//初始化

}
Serial_Controler::~Serial_Controler()
{
    delete ui;

    //删除QList占用的内存及清空列表
    qDeleteAll(btnPushlist);
    btnPushlist.clear();
}


void Serial_Controler::  SERIAL_Init()
{
    Conect_Init();
    SearchPort();
    sbasic_Seting();
    SerialInit();
    OpenLoadConfigIni();

}

void Serial_Controler::  sbasic_Seting()
{

    /*...........................界面大小设置...............................................*/
    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    //    setMinimumSize(QSize(789,538));
    //    setMaximumSize(QSize(789,538));
    //自定义标题栏
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());//关闭透明窗口
    connect(ui->BTN_TURNOFF,&QPushButton::clicked,this,[=](){CloseSaveConfigIni();this->close();});//按钮关闭窗口
    connect(ui->BTN_Minimized,&QPushButton::clicked,this,&Serial_Controler::showMinimized);//按钮最小化窗口


    //初始化默认打开按钮的状态
    QIcon button_icoss(":/firstQrc/QT_ICON/stop.ico");
    ui->openBtn->setText("  关闭串口");
    ui->openBtn->setIcon(button_icoss);
    ui->openBtn->setIconSize(QSize(27,27));


    //使用qt添加资源   “：+前缀名+文件名 ”
    //ui->BTN_hide->setIcon(QIcon(":/fourth/QT_ICON/zzsz.png"));


    /*...........................鼠标事件设计界面...............................................*/
    setMouseTracking(true);  //这是激活整个窗体的鼠标追踪
    ui->BTN_TURNOFF->setMouseTracking(true); //进入某个按钮时，鼠标追踪属性失效，因此我们也需要激活该按钮的鼠标追踪功能
    ui->BTN_Minimized->setMouseTracking(true);

    QIcon button2_ico(":/firstQrc/QT_ICON/min.png");
    ui->BTN_Minimized->setIcon(button2_ico);
    ui->BTN_Minimized->setIconSize(QSize(18,18));

    QIcon button_ico(":/firstQrc/QT_ICON/turnoff.png");
    ui->BTN_TURNOFF->setIcon(button_ico);
    ui->BTN_TURNOFF->setIconSize(QSize(14,14));


     /*.........................lineEdit限制输入..正整数...........................................*/
     QRegExp regx("[1-9][0-9]+$");
     QValidator *validator = new QRegExpValidator(regx, ui->Edit_Contorll_X );
     ui->Edit_Contorll_X->setValidator(validator);
     ui->Edit_Contorll_Y->setValidator(validator);
     ui->Edit_Contorll_W->setValidator(validator);
     ui->Edit_Contorll_H->setValidator(validator);
     ui->TimerMS1->setValidator(validator);
     ui->TimerMS2->setValidator(validator);
     ui->TimerMS3->setValidator(validator);
     ui->TimerMS4->setValidator(validator);

     if(ui->Radio_Times->isChecked()==true)
     {
    //         ui->stackedWidget->show();
         ui->stackedWidget->setCurrentIndex(1);

     }
     else
     {
    //         ui->stackedWidget->show();
         ui->stackedWidget->setCurrentIndex(0);

     }
     about_developers=new about_developer;





}

void Serial_Controler::  Conect_Init()
{


    /*............................串口选择2当前存在串口.............................*/
    connect(ui->COMBOX_ProtSwitch, QOverload<int>::of(&QComboBox::currentIndexChanged), this,[=](int){  Prot_Switch(); });

    connect(&global_port,&QSerialPort::readyRead,this,&Serial_Controler::serial_Read);//读数据
    connect(ui->radioButton,&QCheckBox::toggled,this,[=](){ checked();});
    connect(ui->radioButton_2,&QCheckBox::toggled,this,[=](){ checked2();});
    connect(ui->radioButton_3,&QCheckBox::toggled,this,[=](){ checked3();});

    connect(ui->SEND,&QPushButton::clicked,this,[=](){ sendBox_clicked();});//read_hex
    connect(ui->BTN_CleanReceiver,&QPushButton::clicked,this,[=](){ ui->receiveData->clear();});//read_hex
    connect(ui->BTN_CleanSender,&QPushButton::clicked,this,[=](){ ui->sendData->clear();});//read_hex
    connect(ui->openBtn,&QPushButton::clicked,this,[=](){ on_openBtn_clicked();});//read_hex

    connect(ui->Btn_TimerRESet,&QPushButton::clicked,this,[=](){  Btn_TimerReSet();     });//read_hex


    /*...............中控.定时发送...........*/

    connect(ui->Btn_TimerSeting,&QPushButton::clicked,this,[=](){    BTN_TimerContorll() ;   });
    connect(timer, &QTimer::timeout, this,[=](){      global_port.write(TimerData_1);   qDebug()<<"定时器发送1";         });
    connect(timer2, &QTimer::timeout, this,[=](){      global_port.write(TimerData_2);   qDebug()<<"定时器发送2";         });
    connect(timer3, &QTimer::timeout,this, [=](){      global_port.write(TimerData_3);   qDebug()<<"定时器发送3";         });
    connect(timer4, &QTimer::timeout,this, [=](){   time4SwitchSend();      });

    /*...........................................配置文件...............................................................*/
     connect(ui->BTN_SaveConfig,&QPushButton::clicked,this,[=](){   SaveConfigFile();    });
     connect(ui->BTN_LoadConfig,&QPushButton::clicked,this,[=](){  flage_ResetOrLoad=0; LoadConfigFile();    });
     connect(ui->BTN_ResetConfig,&QPushButton::clicked,this,[=](){ flage_ResetOrLoad=1; SERIAL_Reset() ;  });


}

void Serial_Controler::SearchPort()//找端口及配置端口号
 {
    QString getprotName;
     /*......寻找端口............................*/

    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
        {

             QStringList CommPortList;
           // qDebug() << "Name        : " << info.portName();
           //  qDebug() << "Description : " << info.description();
            global_port.setPortName(info.portName());//将找到的端口设置为在线端口
            getprotName=info.portName();
           ui->COMBOX_ProtSwitch->setCurrentText(getprotName);//选择当前串口显示

            /*CommPortList.append(global_port.portName());
            ui->COMBOX_ProtSwitch->addItems(CommPortList);//添加当前存在端口
            ui->COMBOX_ProtSwitch->setCurrentText(getprotName);//选择当前串口显示
            */
        }



 }


void Serial_Controler:: SerialInit()
{

        global_port.setParity(QSerialPort::NoParity);//设置奇偶校验
        global_port.setDataBits(QSerialPort::Data8);//设置数据位数
        global_port.setStopBits(QSerialPort::OneStop);//设置停止位
        global_port.setBaudRate(115200);   //设置波特率
        //global_port.setPortName("COM1");//设置串口号
        global_port .open(QIODevice::ReadWrite);//开启串口
        // global_port.close();//关闭串口

         /*......使能............................*/
        ui->COMBOX_ProtSwitch->setEnabled(false);
        ui->rateBox->setEnabled(false);
        ui->dataBox->setEnabled(false);
        ui->checkBox->setEnabled(false);
        ui->stopBox->setEnabled(false);

       QStringList baudList;   //波特率
       QStringList parityList; //校验位
       QStringList dataBitsList;   //数据位
       QStringList stopBitsList;   //停止位
       // 波特率    //波特率默认选择下拉第三项：9600
       baudList<<"  1200"<<"  2400"<<"  4800"<<"  9600"
              <<" 14400"<<" 19200"<<" 38400"<<" 56000"
             <<" 57600"<<"115200";
       ui->rateBox->addItems(baudList);
       ui->rateBox->setCurrentIndex(9);
       // 校验      //校验默认选择无
       parityList<<"无"<<"奇"<<"偶";
       ui->checkBox->addItems(parityList);
       ui->checkBox->setCurrentIndex(0);
       /*......数据类型初始化............................*/
       checked();
       checked2();
       checked3();



}



void Serial_Controler::  checked()//HEX read
{

 if(ui->radioButton->isChecked()==true)
 { a=1;}

 else {a=0; }
// qDebug()<<"a"<<a;
}

void Serial_Controler::  checked2()//turn

{

 if(ui->radioButton_2->isChecked()==true)
 { b=1;}

 else {b=0; }
// qDebug()<<"b"<<b;
}

void Serial_Controler::  checked3()//HEX
{

 if(ui->radioButton_3->isChecked()==true)
 { c=1;}

 else {c=0; }
//  qDebug()<<"c"<<c;
}

/*................................................ReadData.................................................*/
#if 1
void Serial_Controler::serial_Read()
{   QString buffer_1;
    //从缓冲区中读取数据
    QByteArray buffer = global_port.readAll();
    if(!buffer.isEmpty())//如果非空说明有数据接收
    {   //转换成16进制大写
        QString str=buffer.toHex().data();
        str=str.toUpper();
        //一个16进制占4位，8位为一字节，所以每两位16进制空一格
        for(int i=0;i<str.length();i+=2)
        {
               QString str_1 = str.mid (i,2);
               buffer_1 += str_1;
               buffer_1 += " ";
        }
    //读取之前显示数据
   // QString receive = ui->receiveData->toPlainText();
    //清空显示
    //ui->receiveData->clear();
    //重新显示
    if(a==0){
           // receive += QString(buffer);
            if(!ui->Stop_Recevie->isChecked())
             {
            ui->receiveData->appendPlainText(buffer);
             }

            }//直接显示
    else    {
            //receive += QString(buffer_1);
            if(!ui->Stop_Recevie->isChecked())
             {
            ui->receiveData->appendPlainText(buffer_1);
             }
            }//16进制显示
    }
    buffer.clear();
}


#endif
/*................................................sendData.................................................*/
void Serial_Controler::sendBox_clicked()
{   QByteArray Data_1;
    //获取输入窗口sendData的数据
    QString Data = ui->sendData->toPlainText();
    if(b)       {Data+='\r';Data+='\n';}//插入换行
    if(c==0)    Data_1 = Data.toUtf8();//转换成utf8格式的字节流发送
    else        Data_1 = QByteArray::fromHex (Data.toLatin1().data());//按十六进制编码发送
    // 写入发送缓存区
    global_port.write(Data_1);
}






void Serial_Controler::on_openBtn_clicked()
{
    // 打开串口
    QIcon star_icoss(":/firstQrc/QT_ICON/star.ico");
    QIcon stop_icoss(":/firstQrc/QT_ICON/stop.ico");


    if(ui->openBtn->text() == "打开串口")
    {


        // 打开串口
        if(global_port.open(QIODevice::ReadWrite))
        {
            // 设置波特率
            global_port.setBaudRate(ui->rateBox->currentText().toInt());
            //设置数据位数
            switch(ui->dataBox->currentIndex())
            {
            case 0: global_port.setDataBits(QSerialPort::Data5); break;
            case 1: global_port.setDataBits(QSerialPort::Data6); break;
            case 2: global_port.setDataBits(QSerialPort::Data7); break;
            case 3: global_port.setDataBits(QSerialPort::Data8); break;
            default: break;
            }
            // 设置校验位
            //SerialPort->setParity(QSerialPort::NoParity);
            //设置奇偶校验
            switch(ui->checkBox->currentIndex())
            {
            case 0: global_port.setParity(QSerialPort::NoParity); break;
            case 1: global_port.setParity(QSerialPort::OddParity); break;
            case 2: global_port.setParity(QSerialPort::EvenParity); break;
            default: break;
            }
            // 设置流控制
            global_port.setFlowControl(QSerialPort::NoFlowControl);
            //设置停止位
            switch(ui->stopBox->currentIndex())
            {
            case 0: global_port.setStopBits(QSerialPort::OneStop); break;
            case 1: global_port.setStopBits(QSerialPort::TwoStop); break;


            default: break;
            }
        }
        //打开串口

        else
        {
            QMessageBox::about(NULL, "提示", "串口无法打开\r\n不存在或已被占用");
            return;//
        }

        ui->openBtn->setText("  关闭串口");
//        ui->openBtn->setStyleSheet//开关按钮
//                   ("QPushButton{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(218, 0, 0, 255), stop:1 rgba(209, 164, 139, 255));}");

        ui->openBtn->setIcon(stop_icoss);
        ui->openBtn->setIconSize(QSize(27,27));
        //下拉菜单控件使能
        ui->rateBox->setEnabled(false);
        ui->dataBox->setEnabled(false);
        ui->checkBox->setEnabled(false);
        ui->stopBox->setEnabled(false);
        ui->COMBOX_ProtSwitch->setEnabled(false);

        qDebug()<<"停止"<<ui->stopBox->currentIndex();
        qDebug()<<"停止"<<global_port.stopBits();
        qDebug()<<"校验位"<<global_port.parity();
        qDebug()<<"数据位"<<global_port.dataBits();
        qDebug()<<"波特率"<<global_port.baudRate();
        //搜索串口按键使能
        //ui->searchBtn->setEnabled(false);
        //发送按键使能
        ui->SEND->setEnabled(true);
    }
    // 关闭串口
    else
    {
        global_port.close();
        ui->openBtn->setText("打开串口");
//        ui->openBtn->setStyleSheet//开关按钮
//                   ("QPushButton{background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.568182 rgba(17, 255, 41, 255), stop:1 rgba(115, 216, 1, 255));}");
        ui->openBtn->setIcon(star_icoss);
        ui->openBtn->setIconSize(QSize(27,27));
        //下拉按键使能
        ui->rateBox->setEnabled(true);
        ui->dataBox->setEnabled(true);
        ui->checkBox->setEnabled(true);
        ui->stopBox->setEnabled(true);
        ui->COMBOX_ProtSwitch->setEnabled(true);
        //搜索串口按键使能
        //ui->searchBtn->setEnabled(true);
        //发送按键使能
        ui->SEND->setEnabled(false);


    }
}

/*.................................................................串口切换..................................................................*/
void Serial_Controler:: Prot_Switch()
{
   global_port.close();//关闭串口
   global_port.setPortName(ui->COMBOX_ProtSwitch->currentText());
  // global_port.open(QIODevice::ReadWrite);//开启串口
   qDebug()<<"当前串口号"<<global_port.portName();

}





void  Serial_Controler:: BTN_TimerContorll()//定时数据 配置
  {
    flage_changeTimer=0;//初始化切换发送
    TimerData_1= QByteArray::fromHex (ui->Tmer_command1->text().toLatin1().data());//按十六进制编码发送
    TimerData_2= QByteArray::fromHex (ui->Tmer_command2->text().toLatin1().data());//按十六进制编码发送
    TimerData_3= QByteArray::fromHex (ui->Tmer_command3->text().toLatin1().data());//按十六进制编码发送
    TimerData_4= QByteArray::fromHex (ui->Tmer_command4->text().toLatin1().data());//按十六进制编码发送
    TimerData_5= QByteArray::fromHex (ui->Tmer_command5->text().toLatin1().data());//按十六进制编码发送
    TimerData_6= QByteArray::fromHex (ui->Tmer_command6->text().toLatin1().data());//按十六进制编码发送
    qDebug()<<"TimerData_1"<<TimerData_1;
    qDebug()<<"TimerData_2"<<TimerData_2;
    qDebug()<<"TimerData_3"<<TimerData_3;
    qDebug()<<"TimerData_4"<<TimerData_4;
    qDebug()<<"TimerData_5"<<TimerData_5;
    qDebug()<<"TimerData_6"<<TimerData_6;

    if(ui->Btn_tmieCheckBox->isChecked()==true)
    {
     timer->start(ui->TimerMS1->text().toInt());
    }
    else
     {
    timer ->stop();
    }


    if(ui->Btn_tmieCheckBox_2->isChecked()==true)
    {
    timer2->start(ui->TimerMS2->text().toInt());
    }
     else
     {
    timer2 ->stop();
    }


    if(ui->Btn_tmieCheckBox_3->isChecked()==true)
    {
    timer3->start(ui->TimerMS3->text().toInt());
    }
     else
     {
    timer3 ->stop();
    }



    if(ui->Btn_tmieCheckBox_4->isChecked()==true)
    {
    timer4->start(ui->TimerMS4->text().toInt());
    }

     else
     {
    timer4 ->stop();
    }


}

void Serial_Controler::  time4SwitchSend()
{
    flage_changeTimer++;
    if(flage_changeTimer==1)
    {
        global_port.write(TimerData_4);
        qDebug()<<"定时器发送4";
    }
    else if(flage_changeTimer==2)
    {
        global_port.write(TimerData_5);
        qDebug()<<"定时器发送5";
        if(ui->command_CheckBox_3->isChecked()==false)
        {
        flage_changeTimer=0;
        }
    }
    else if(flage_changeTimer==3)
    {
        if(ui->command_CheckBox_3->isChecked()==true)
        {
        global_port.write(TimerData_6);
        qDebug()<<"定时器发送6";
        }
        flage_changeTimer=0;

    }

}

void Serial_Controler:: MoveButtonReSet()
{

    // qDeleteAll(ui->widgetss->findChildren<QObject *>());
     QList<MoveButton*> MoveButtonsss = ui->widgetss->findChildren<MoveButton*>();
     foreach(MoveButton* MoveBut, MoveButtonsss)
     {
         qDebug()<<"初始化按钮删除原来对象"<<MoveBut->objectName();
         MoveBut->deleteLater(); //或者用delete wdg;也行
     }
     BTNs=0;
     btnPushlist.clear();

}

void Serial_Controler:: Btn_TimerReSet()
{

ui->Tmer_command1->clear();
ui->Tmer_command2->clear();
ui->Tmer_command3->clear();
ui->Tmer_command4->clear();
ui->Tmer_command5->clear();
ui->Tmer_command6->clear();
ui->Btn_tmieCheckBox->setChecked(0);
ui->Btn_tmieCheckBox_2->setChecked(0);
ui->Btn_tmieCheckBox_3->setChecked(0);
ui->Btn_tmieCheckBox_4->setChecked(0);
ui->command_CheckBox_3->setChecked(0);
ui->TimerMS1->setText("1");
ui->TimerMS2->setText("1");
ui->TimerMS3->setText("1");
ui->TimerMS4->setText("1");

}
/*.............................................................配置文件............................................................*/

void Serial_Controler:: SaveConfigFile()
{

    QFileDialog fileDialog;
    QString fileName = fileDialog.getSaveFileName(this,"Save File","","Config File(*.totoro)");
    if(fileName == "")
    {
        return;
    }
    QFile file(fileName);
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::warning(this,"error","open file failure!");
        return;
    }
    else
    {
        //QTextStream textStream(&file);
        //QString str = ui->textEdit->toPlainText();
        //textStream<<str;




        QJsonObject jsonObject;



//.............................................界面模式：编辑模式/发送界面模式............................................
        jsonObject.insert("SerialmodelSwitch",ui->Stop_Recevie_2->isChecked());


//........................................保存按钮属性.......................................................
       jsonObject.insert("MoveBtnS",btnPushlist.size());
       qDebug()<<"按钮的数量："<<btnPushlist.size();

        for(int i=0;i<btnPushlist.size();i++)
        {
            qDebug()<<"                        ";
            jsonObject.insert("MoveBtnName"+QString::number(i),btnPushlist.at(i)->text());
            qDebug()<<"保存的按钮"<<i<<" "<<btnPushlist.at(i)->text();

            jsonObject.insert("MoveBtnDatas"+QString::number(i), btnPushlist.at(i)->getBtnDatas().toHex().data());
            qDebug()<<"数据"<<  btnPushlist.at(i)->getBtnDatas().toHex().data();

            jsonObject.insert("MoveBtnX"+QString::number(i),btnPushlist.at(i)->x());
            jsonObject.insert("MoveBtnY"+QString::number(i),btnPushlist.at(i)->y());
            jsonObject.insert("MoveBtnW"+QString::number(i),btnPushlist.at(i)->width());
            jsonObject.insert("MoveBtnH"+QString::number(i),btnPushlist.at(i)->height());
            qDebug()<<"控件X:"<< btnPushlist.at(i)->x()<<"  控件Y:"<< btnPushlist.at(i)->y()<<"  控件宽:"<< btnPushlist.at(i)->width()<<"  控件高:"<< btnPushlist.at(i)->height();

        }





//........................................保存定时数据.......................................................
           jsonObject.insert("TimeSend1",ui->Tmer_command1->text());
           jsonObject.insert("TimeSend2",ui->Tmer_command2->text());
           jsonObject.insert("TimeSend3",ui->Tmer_command3->text());
           jsonObject.insert("TimeChangeSend1",ui->Tmer_command4->text());
           jsonObject.insert("TimeChangeSend2",ui->Tmer_command5->text());
           jsonObject.insert("TimeChangeSend3",ui->Tmer_command6->text());
           jsonObject.insert("TimerMs1",ui->TimerMS1->text());
           jsonObject.insert("TimerMs2",ui->TimerMS2->text());
           jsonObject.insert("TimerMs3",ui->TimerMS3->text());
           jsonObject.insert("TimerMs4",ui->TimerMS4->text());
           jsonObject.insert("TimeSendState1",ui->Btn_tmieCheckBox->isChecked());
           jsonObject.insert("TimeSendState2",ui->Btn_tmieCheckBox_2->isChecked());
           jsonObject.insert("TimeSendState3",ui->Btn_tmieCheckBox_3->isChecked());
           jsonObject.insert("TimeSendState4",ui->Btn_tmieCheckBox_4->isChecked());
           jsonObject.insert("command_CheckBox3",ui->command_CheckBox_3->isChecked());
//........................................保存串口配置数据.......................................................
           jsonObject.insert("Serial_PortName",ui->COMBOX_ProtSwitch->currentText());
           jsonObject.insert("Serial_Parity",ui->checkBox->currentIndex());
           jsonObject.insert("Serial_DataBits",ui->dataBox->currentIndex());
           jsonObject.insert("Serial_StopBits",ui->stopBox->currentIndex());
           jsonObject.insert("Serial_BaudRate",ui->rateBox->currentText());


       // 使用QJsonDocument设置该json对象
           QJsonDocument jsonDoc;
           jsonDoc.setObject(jsonObject);
       // 将json以文本形式写入文件并关闭文件。
           file.write(jsonDoc.toJson());



        QMessageBox::about(NULL, "提示", "保存配置成功。      ");
        file.close();
    }







}
void Serial_Controler:: LoadConfigFile()
{
    QString fileName;
       fileName = QFileDialog::getOpenFileName(this,"Open File","","Config File(*.totoro)");
       if(fileName == "")
       {
           return ;
       }
       else
       {
           QFile file(fileName);
           if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
           {
               QMessageBox::warning(this,"error","open file error!");
               return;
           }
           else
           {
               if(!file.isReadable())
                   QMessageBox::warning(this,"error","this file is not readable!");
               else
               {
                   QJsonParseError jsonError;
                   QJsonDocument   doucment  =QJsonDocument::fromJson( file.readAll(), &jsonError );
                   if (!doucment.isNull() && (jsonError.error == QJsonParseError::NoError)) {  // 解析未发生错误
                       if (doucment.isObject()) { // JSON 文档为对象
                             SERIAL_Reset();//复位所有配置 等待载入配置
                          // BTN_SetStyle();//让所有控件变成已经设定模式
                           QJsonObject object = doucment.object();  // 转化为对象





                          //........................................获取按钮载入数据.......................................................

                           QJsonValue MoveBtnSfor = object.value("MoveBtnS");  // 获取指定 key 对应的 value
                           qDebug()<<"按钮载入数量："<<MoveBtnSfor.toInt();

                            for(int i=0;i<MoveBtnSfor.toInt();i++)
                            {
                                QByteArray Datas;
                                   //........................获取载入按钮数据.......................
                                   QJsonValue value = object.value("MoveBtnDatas"+QString::number(i));  // 获取指定 key 对应的 value
                                   if (value.isString())
                                   {  // 判断 value 是否为字符串
                                       QString strName = value.toString();  // 将 value 转化为字符串
                                       Datas= QByteArray::fromHex (strName.toLatin1().data());//按十六进制编码发送
                                   }
                                   //........................获取载入按钮属性.......................
                                   QJsonValue value2x = object.value("MoveBtnX"+QString::number(i));  // 获取指定 key 对应的 value
                                   QJsonValue value2y = object.value("MoveBtnY"+QString::number(i));  // 获取指定 key 对应的 value
                                   QJsonValue value2w = object.value("MoveBtnW"+QString::number(i));  // 获取指定 key 对应的 value
                                   QJsonValue value2h = object.value("MoveBtnH"+QString::number(i));  // 获取指定 key 对应的 value
                                   int Contorll_X = value2x.toInt();
                                   int Contorll_Y = value2y.toInt();
                                   int Contorll_W = value2w.toInt();
                                   int Contorll_H = value2h.toInt();
                                   QString BtnTextName=object.value("MoveBtnName"+QString::number(i)).toString();//载入控件名称


                                   MoveButton * MoveButtons;
                                   MoveButtons=new MoveButton(ui->widgetss);
                                   MoveButtons->show();
                                   //设置按钮在主对话框的位置
                                   MoveButtons->setGeometry(Contorll_X,Contorll_Y,Contorll_W,Contorll_H);
                                   //设置按钮对象名字
                                   MoveButtons->setObjectName("MoveButtons"+QString::number(BTNs));
                                   //设置按钮显示文本
                                   MoveButtons->setText(BtnTextName);
                                   //关联信号槽函数
                                   MoveButtons->setBtnDatas(Datas);//赋值数据给按钮 BtnPropertieInit
                                   //初始化控件属性
                                   MoveButtons->BtnPropertieInit(MoveButtons->text(),Datas,Contorll_H,Contorll_W,Contorll_X,Contorll_Y);//初始化控件属性
                                   //点击按钮发送该按钮附带的数据
                                   connect(MoveButtons,&MoveButton::movebtn_clicked,this,[=](){slotButtonClicked(MoveButtons->getBtnDatas(),BTNs);});
                                   //切换编辑和发送数据模式  按钮也同步切换
                                   connect(this,&Serial_Controler::SignalMOdelfalge,MoveButtons,&MoveButton::MyDel);
                                   //按钮删除时删除保存的按钮列表
                                   connect(MoveButtons,&MoveButton::Signals_DeleteBTN,this,&Serial_Controler::slots_DeleteBTN);
                                   //向QList添加成员项
                                   btnPushlist.append(MoveButtons);
                                   //向QList添加成员项
                                   MoveButtonName.append(MoveButtons->text());
                                   BTNs++;
                                   qDebug()<<"CreatBtnPush"+QString::number(BTNs)<< MoveButtons->objectName()<<"x"<<Contorll_X<<"y"<<Contorll_Y<<"w"<<Contorll_W<<"z"<<Contorll_H<<"数据"<<MoveButtons->getBtnDatas();

                            }
                            //.............................................界面模式：编辑模式/发送界面模式............................................
                            ui->Stop_Recevie_2->setChecked(object.value("SerialmodelSwitch").toBool());
                            SerialmodelSwitch();

                            /*.......................串口载入配置........................................*/
                            ui->COMBOX_ProtSwitch->setCurrentText(object.value("Serial_PortName").toString());
                            ui->checkBox->setCurrentIndex(object.value("Serial_Parity").toInt());
                            ui->dataBox->setCurrentIndex(object.value("Serial_DataBits").toInt());
                            ui->stopBox->setCurrentIndex(object.value("Serial_StopBits").toInt());
                            ui->rateBox->setCurrentText(object.value("Serial_BaudRate").toString());
                            LoadSerialConfig();


                           /*.......................定时载入配置........................................*/
                            ui->Tmer_command1->setText(object.value("TimeSend1").toString());
                            ui->Tmer_command2->setText(object.value("TimeSend2").toString());
                            ui->Tmer_command3->setText(object.value("TimeSend3").toString());
                            ui->Tmer_command4->setText(object.value("TimeChangeSend1").toString());
                            ui->Tmer_command5->setText(object.value("TimeChangeSend2").toString());
                            ui->Tmer_command6->setText(object.value("TimeChangeSend3").toString());
                            ui->TimerMS1->setText(object.value("TimerMs1").toString());
                            ui->TimerMS2->setText(object.value("TimerMs2").toString());
                            ui->TimerMS3->setText(object.value("TimerMs3").toString());
                            ui->TimerMS4->setText(object.value("TimerMs4").toString());
                            ui->Btn_tmieCheckBox->setChecked(object.value("TimeSendState1").toBool());
                            ui->Btn_tmieCheckBox_2->setChecked(object.value("TimeSendState2").toBool());
                            ui->Btn_tmieCheckBox_3->setChecked(object.value("TimeSendState3").toBool());
                            ui->Btn_tmieCheckBox_4->setChecked(object.value("TimeSendState4").toBool());
                            ui->command_CheckBox_3->setChecked(object.value("command_CheckBox3").toBool());
         QMessageBox::about(NULL, "提示", "配置载入成功。      ");

                       }
                   }




               }
           }
       }






}



  void Serial_Controler:: SERIAL_Reset()
  { 
  Btn_TimerReSet();
  MoveButtonReSet();//控件初始化
  }


 void Serial_Controler::LoadSerialConfig()
 {
     QIcon star_icoss(":/firstQrc/QT_ICON/star.ico");
     QIcon stop_icoss(":/firstQrc/QT_ICON/stop.ico");
     global_port.close();//载入串口配置时先关闭串口
     // 打开串口
     if(global_port.open(QIODevice::ReadWrite))
     {
         // 设置波特率
         global_port.setBaudRate(ui->rateBox->currentText().toInt());
         //设置数据位数
         switch(ui->dataBox->currentIndex())
         {
         case 0: global_port.setDataBits(QSerialPort::Data5); break;
         case 1: global_port.setDataBits(QSerialPort::Data6); break;
         case 2: global_port.setDataBits(QSerialPort::Data7); break;
         case 3: global_port.setDataBits(QSerialPort::Data8); break;
         default: break;
         }
         // 设置校验位
         //SerialPort->setParity(QSerialPort::NoParity);
         //设置奇偶校验
         switch(ui->checkBox->currentIndex())
         {
         case 0: global_port.setParity(QSerialPort::NoParity); break;
         case 1: global_port.setParity(QSerialPort::OddParity); break;
         case 2: global_port.setParity(QSerialPort::EvenParity); break;
         default: break;
         }
         // 设置流控制
         global_port.setFlowControl(QSerialPort::NoFlowControl);
         //设置停止位
         switch(ui->stopBox->currentIndex())
         {
         case 0: global_port.setStopBits(QSerialPort::OneStop); break;
         case 1: global_port.setStopBits(QSerialPort::TwoStop); break;
         default: break;
         }

         ui->openBtn->setText("  关闭串口");
 //        ui->openBtn->setStyleSheet//开关按钮
 //                   ("QPushButton{background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(218, 0, 0, 255), stop:1 rgba(209, 164, 139, 255));}");

         ui->openBtn->setIcon(stop_icoss);
         ui->openBtn->setIconSize(QSize(27,27));
         //下拉菜单控件使能
         ui->rateBox->setEnabled(false);
         ui->dataBox->setEnabled(false);
         ui->checkBox->setEnabled(false);
         ui->stopBox->setEnabled(false);
         ui->COMBOX_ProtSwitch->setEnabled(false);

         qDebug()<<"停止"<<ui->stopBox->currentIndex();
         qDebug()<<"停止"<<global_port.stopBits();
         qDebug()<<"校验位"<<global_port.parity();
         qDebug()<<"数据位"<<global_port.dataBits();
         qDebug()<<"波特率"<<global_port.baudRate();
         //搜索串口按键使能
         //ui->searchBtn->setEnabled(false);
         //发送按键使能
         ui->SEND->setEnabled(true);



     }
     //打开串口

     else
     {

         QMessageBox::about(NULL, "提示", "串口无法打开!\r\n不存在或已被占用\r\n请重新配置串口号");
         global_port.close();
         ui->openBtn->setText("打开串口");
 //        ui->openBtn->setStyleSheet//开关按钮
 //                   ("QPushButton{background-color: qlineargradient(spread:reflect, x1:0, y1:0, x2:1, y2:1, stop:0.568182 rgba(17, 255, 41, 255), stop:1 rgba(115, 216, 1, 255));}");
         ui->openBtn->setIcon(star_icoss);
         ui->openBtn->setIconSize(QSize(27,27));
         //下拉按键使能
         ui->rateBox->setEnabled(true);
         ui->dataBox->setEnabled(true);
         ui->checkBox->setEnabled(true);
         ui->stopBox->setEnabled(true);
         ui->COMBOX_ProtSwitch->setEnabled(true);
         //搜索串口按键使能
         //ui->searchBtn->setEnabled(true);
         //发送按键使能
         ui->SEND->setEnabled(false);


     }


 }

/*.......................................................................................鼠标事件...........................................................................*/
  bool Serial_Controler::enterBtn(QPoint pp, QPushButton *btn)
  {
     int height = btn->height();
     int width = btn->width();
     QPoint btnMinPos = btn->pos();
     QPoint btnMaxPos = btn->pos();
     btnMaxPos.setX(btn->pos().x()+width);
     btnMaxPos.setY(btn->pos().y()+height);
     if(pp.x() >= btnMinPos.x() && pp.y() >= btnMinPos.y()
         && pp.x() <= btnMaxPos.x() && pp.y() <= btnMaxPos.y())
         return true;
     else
         return false;
  }


 /*................................窗口移动....................................*///鼠标点击事件
void Serial_Controler::mousePressEvent(QMouseEvent *event)
  {
       this->Serial_Controler::windowPos = this->pos();                // 获得部件当前位置
       this->mousePos = event->globalPos();     // 获得鼠标位置
       this->dPos = mousePos - windowPos;       // 移动后部件所在的位置
  }

void Serial_Controler::mouseMoveEvent(QMouseEvent *event)//鼠标移动时间
  {

     if(event->pos().y()<50||event->pos().y()>=631)//限定鼠标移动时间捕获
     {
         if(event->buttons()&Qt::LeftButton)
         {
          this->move(event->globalPos() - this->dPos);
         }


     }

   //按钮捕获鼠标事件
     event->accept();
     if(enterBtn(event->pos(),ui->BTN_TURNOFF))
     {
         ui->BTN_TURNOFF->setStyleSheet//开关按钮
                    ("QPushButton{background-color: rgb(252, 92, 92);}");
     }
     else
         ui->BTN_TURNOFF->setStyleSheet//开关按钮
                    ("QPushButton{background-color: rgba(0, 0, 0, 0);border:none;}");


     if(enterBtn(event->pos(),ui->BTN_Minimized))
     {
         ui->BTN_Minimized->setStyleSheet//开关按钮
                    ("QPushButton{background-color: rgb(52, 234, 243);}");
     }
     else
         ui->BTN_Minimized->setStyleSheet//开关按钮
                    ("QPushButton{background-color: rgba(0, 0, 0, 0);border:none;}");




//     qDebug()<<"当前鼠标x"<<event->pos().x();
//     qDebug()<<"当前鼠标Y"<<event->pos().y();
  }




void Serial_Controler::on_comboBox_currentIndexChanged(int index)
{
    switch(index)
    {
    case 0:
    ui->groupBox_5->hide();
    ui->stackedWidget->hide();

    break;

    case 1:
    ui->groupBox_5->show();
    ui->stackedWidget->hide();
    break;

    case 2:
    ui->groupBox_5->hide();
    ui->stackedWidget->show();
    ui->stackedWidget->setCurrentIndex(0);

    break;
    case 3:
    ui->groupBox_5->hide();
    ui->stackedWidget->show();
    ui->stackedWidget->setCurrentIndex(1);

    break;

    default:
        break;

    }
}


void Serial_Controler::on_BTN_creat_clicked(bool checked)
{
    BTNs++;
    QString Data = ui->Edit_Contorll1->toPlainText();
    QByteArray Datas=QByteArray::fromHex (Data.toLatin1().data());//按十六
    int  Contorll_X,Contorll_Y,Contorll_H,Contorll_W;
    Contorll_X=ui->Edit_Contorll_X->text().toInt();
    Contorll_Y=ui->Edit_Contorll_Y->text().toInt();
    Contorll_W=ui->Edit_Contorll_W->text().toInt();
    Contorll_H=ui->Edit_Contorll_H->text().toInt();


    MoveButton * MoveButtons;
    MoveButtons=new MoveButton(ui->widgetss);
    MoveButtons->show();
    //设置按钮在主对话框的位置
    MoveButtons->setGeometry(Contorll_X,Contorll_Y,Contorll_W,Contorll_H);
//    //设置按钮提示双击
//    MoveButtons->setToolTip("双击编辑控件属性");
    //设置按钮对象名字
    MoveButtons->setObjectName("MoveButtons"+QString::number(BTNs));
    //设置按钮显示文本
    MoveButtons->setText(ui->Edit_Contorll1Name->text());
    //赋值数据给按钮 BtnPropertieInit
    MoveButtons->setBtnDatas(Datas);
    //初始化控件属性
    MoveButtons->BtnPropertieInit(MoveButtons->text(),Datas,Contorll_H,Contorll_W,Contorll_X,Contorll_Y);//初始化控件属性
    //点击按钮发送该按钮附带的数据
    connect(MoveButtons,&MoveButton::movebtn_clicked,this,[=](){slotButtonClicked(MoveButtons->getBtnDatas(),BTNs);});
    //切换编辑和发送数据模式  按钮也同步切换
    connect(this,&Serial_Controler::SignalMOdelfalge,MoveButtons,&MoveButton::MyDel);
    //按钮删除时删除保存的按钮列表
    connect(MoveButtons,&MoveButton::Signals_DeleteBTN,this,&Serial_Controler::slots_DeleteBTN);
    //向QList添加成员项
    btnPushlist.append(MoveButtons);
    //向QList添加成员项
    MoveButtonName.append(MoveButtons->text());
    qDebug()<<"CreatBtnPush"+QString::number(BTNs)<< MoveButtons->objectName()<<"x"<<Contorll_X<<"y"<<Contorll_Y<<"w"<<Contorll_W<<"z"<<Contorll_H<<"数据"<<MoveButtons->getBtnDatas();

}

void Serial_Controler::slotButtonClicked(QByteArray datas,int btns)
{
    qDebug()<<"触发按钮点击";

    if(!Serialmodel)//触控控件信号 1可以移动不发数据 0不可以移动可以发数据
    {
        qDebug()<<"发送的数据为"<<datas;
        global_port.write(datas);

        QPushButton *btn = qobject_cast<QPushButton*>(sender());
        //获取按钮显示文本
        QString text = btn->text();
        //获取按钮对象名称
        QString name = sender()->objectName();
        //do something在这里进行其他事项处理
        qDebug()<<text;
        qDebug()<<name;

    }


}



void Serial_Controler::on_Stop_Recevie_2_clicked()
{

SerialmodelSwitch();

}
void Serial_Controler::SerialmodelSwitch()
{
    if(ui->Stop_Recevie_2->isChecked()==true)
    {
    qDebug()<<"编辑模式";
    ui->groupBox_2->show();
    Serialmodel=1;
    emit SignalMOdelfalge(Serialmodel);//触控控件信号 1可以移动 0不可以移动
    ui->widgetss->setStyleSheet("background-color: rgb(181, 220, 255);}" );
    }
    else
    {
    qDebug()<<"发送数据模式";
    ui->groupBox_2->hide();
    Serialmodel=0;
    emit SignalMOdelfalge(Serialmodel);//触控控件信号 1可以移动 0不可以移动

    ui->widgetss->setStyleSheet("background-color: rgb(47, 146, 173);}");
    }
}


void Serial_Controler::on_Radio_Times_clicked()
{
    if(ui->Radio_Times->isChecked()==true)
    {
        ui->stackedWidget->show();
        ui->stackedWidget->setCurrentIndex(1);
        ui->Radio_Coms->setChecked(false);
    }
    else
    {
        ui->stackedWidget->hide();

    }

}


void Serial_Controler::on_Radio_Coms_clicked()
{
    if(ui->Radio_Coms->isChecked()==true)
    {
        ui->stackedWidget->show();
        ui->stackedWidget->setCurrentIndex(0);
        ui->Radio_Times->setChecked(false);
    }
    else
    {
        ui->stackedWidget->hide();

    }

}


void Serial_Controler::on_Radio_ComSet_clicked()
{
    if(ui->Radio_ComSet->isChecked()==true)
    {
       ui->groupBox_5->show();
    }
    else
    {
        ui->groupBox_5->hide();

    }

}


void Serial_Controler::on_pushButton_clicked()
{
    about_developers->show();



//   qDebug()<<"按钮的数量："<<btnPushlist.size();
//   for(int i=0;i<btnPushlist.size();i++)
//   {
//       qDebug()<<"按钮的数量"<<i<<"                        ";
//       qDebug()<<"控件项目名称"<< btnPushlist.at(i)->objectName()<<"  控件名称:"<< btnPushlist.at(i)->text();
//       qDebug()<<"数据"<< btnPushlist.at(i)->getBtnDatas();
//       qDebug()<<"控件位置:"<< btnPushlist.at(i)->pos()<<"  控件宽:"<< btnPushlist.at(i)->width()<<"  控件高:"<< btnPushlist.at(i)->height();
//       qDebug()<<"                        ";
//   }


}


void Serial_Controler::slots_DeleteBTN(QString btn)
{

    for(int i=0;i<btnPushlist.size();i++)
    {
        if(btnPushlist.at(i)->objectName()==btn)
        {
           qDebug()<<"删除按钮列表中"<<btnPushlist.at(i)->text();
           btnPushlist.removeAt(i);

        }

    }

}

void Serial_Controler::CloseSaveConfigIni()

{
    //QCoreApplication::applicationDirPath()+"/Config.ini"需要清空文件的路径
     QFile file(QCoreApplication::applicationDirPath()+"/Config.ini");
     if (!file.open(QIODevice::WriteOnly | QIODevice::Text | QFile::Truncate))
     {
         qDebug()<<"文件清空失败";
     }
     file.close();


    //QFile file(QCoreApplication::applicationDirPath()+"/Config.ini");
      if(!file.open(QIODevice::ReadWrite))
      {
          qDebug() << "File open error";
      }
      else
      {
          qDebug() <<"File open!";

          {
              QJsonObject jsonObject;
      //.............................................界面模式：编辑模式/发送界面模式............................................
              jsonObject.insert("SerialmodelSwitch",ui->Stop_Recevie_2->isChecked());


      //........................................保存按钮属性.......................................................
             jsonObject.insert("MoveBtnS",btnPushlist.size());
             qDebug()<<"按钮的数量："<<btnPushlist.size();

              for(int i=0;i<btnPushlist.size();i++)
              {
                  qDebug()<<"                        ";
                  jsonObject.insert("MoveBtnName"+QString::number(i),btnPushlist.at(i)->text());
                  qDebug()<<"保存的按钮"<<i<<" "<<btnPushlist.at(i)->text();

                  jsonObject.insert("MoveBtnDatas"+QString::number(i), btnPushlist.at(i)->getBtnDatas().toHex().data());
                  qDebug()<<"数据"<<  btnPushlist.at(i)->getBtnDatas().toHex().data();

                  jsonObject.insert("MoveBtnX"+QString::number(i),btnPushlist.at(i)->x());
                  jsonObject.insert("MoveBtnY"+QString::number(i),btnPushlist.at(i)->y());
                  jsonObject.insert("MoveBtnW"+QString::number(i),btnPushlist.at(i)->width());
                  jsonObject.insert("MoveBtnH"+QString::number(i),btnPushlist.at(i)->height());
                  qDebug()<<"控件X:"<< btnPushlist.at(i)->x()<<"  控件Y:"<< btnPushlist.at(i)->y()<<"  控件宽:"<< btnPushlist.at(i)->width()<<"  控件高:"<< btnPushlist.at(i)->height();

              }

      //........................................保存定时数据.......................................................
                 jsonObject.insert("TimeSend1",ui->Tmer_command1->text());
                 jsonObject.insert("TimeSend2",ui->Tmer_command2->text());
                 jsonObject.insert("TimeSend3",ui->Tmer_command3->text());
                 jsonObject.insert("TimeChangeSend1",ui->Tmer_command4->text());
                 jsonObject.insert("TimeChangeSend2",ui->Tmer_command5->text());
                 jsonObject.insert("TimeChangeSend3",ui->Tmer_command6->text());
                 jsonObject.insert("TimerMs1",ui->TimerMS1->text());
                 jsonObject.insert("TimerMs2",ui->TimerMS2->text());
                 jsonObject.insert("TimerMs3",ui->TimerMS3->text());
                 jsonObject.insert("TimerMs4",ui->TimerMS4->text());
                 jsonObject.insert("TimeSendState1",ui->Btn_tmieCheckBox->isChecked());
                 jsonObject.insert("TimeSendState2",ui->Btn_tmieCheckBox_2->isChecked());
                 jsonObject.insert("TimeSendState3",ui->Btn_tmieCheckBox_3->isChecked());
                 jsonObject.insert("TimeSendState4",ui->Btn_tmieCheckBox_4->isChecked());
                 jsonObject.insert("command_CheckBox3",ui->command_CheckBox_3->isChecked());
      //........................................保存串口配置数据.......................................................
                 jsonObject.insert("Serial_PortName",ui->COMBOX_ProtSwitch->currentText());
                 jsonObject.insert("Serial_Parity",ui->checkBox->currentIndex());
                 jsonObject.insert("Serial_DataBits",ui->dataBox->currentIndex());
                 jsonObject.insert("Serial_StopBits",ui->stopBox->currentIndex());
                 jsonObject.insert("Serial_BaudRate",ui->rateBox->currentText());


             // 使用QJsonDocument设置该json对象
                 QJsonDocument jsonDoc;
                 jsonDoc.setObject(jsonObject);
             // 将json以文本形式写入文件并关闭文件。
                 file.write(jsonDoc.toJson());

              file.close();
          }



      }


}
void Serial_Controler::OpenLoadConfigIni()
{


        QFile file( QCoreApplication::applicationDirPath()+"/Config.ini");
        if ( !file.open( QIODevice::ReadWrite ) )
        {
            qDebug() << "文件打开失败!\n";

        }
        else
        {
              qDebug() << "文件打开成功!\n";
            QJsonParseError jsonError;
            QJsonDocument   doucment  =QJsonDocument::fromJson( file.readAll(), &jsonError );
            if (!doucment.isNull() && (jsonError.error == QJsonParseError::NoError)) {  // 解析未发生错误
                if (doucment.isObject()) { // JSON 文档为对象
                      SERIAL_Reset();//复位所有配置 等待载入配置
                   // BTN_SetStyle();//让所有控件变成已经设定模式
                    QJsonObject object = doucment.object();  // 转化为对象
                   //........................................获取按钮载入数据.......................................................

                    QJsonValue MoveBtnSfor = object.value("MoveBtnS");  // 获取指定 key 对应的 value
                    qDebug()<<"按钮载入数量："<<MoveBtnSfor.toInt();

                     for(int i=0;i<MoveBtnSfor.toInt();i++)
                     {
                         QByteArray Datas;
                            //........................获取载入按钮数据.......................
                            QJsonValue value = object.value("MoveBtnDatas"+QString::number(i));  // 获取指定 key 对应的 value
                            if (value.isString())
                            {  // 判断 value 是否为字符串
                                QString strName = value.toString();  // 将 value 转化为字符串
                                Datas= QByteArray::fromHex (strName.toLatin1().data());//按十六进制编码发送
                            }
                            //........................获取载入按钮属性.......................
                            QJsonValue value2x = object.value("MoveBtnX"+QString::number(i));  // 获取指定 key 对应的 value
                            QJsonValue value2y = object.value("MoveBtnY"+QString::number(i));  // 获取指定 key 对应的 value
                            QJsonValue value2w = object.value("MoveBtnW"+QString::number(i));  // 获取指定 key 对应的 value
                            QJsonValue value2h = object.value("MoveBtnH"+QString::number(i));  // 获取指定 key 对应的 value
                            int Contorll_X = value2x.toInt();
                            int Contorll_Y = value2y.toInt();
                            int Contorll_W = value2w.toInt();
                            int Contorll_H = value2h.toInt();
                            QString BtnTextName=object.value("MoveBtnName"+QString::number(i)).toString();//载入控件名称


                            MoveButton * MoveButtons;
                            MoveButtons=new MoveButton(ui->widgetss);
                            MoveButtons->show();
                            //设置按钮在主对话框的位置
                            MoveButtons->setGeometry(Contorll_X,Contorll_Y,Contorll_W,Contorll_H);
                            //设置按钮对象名字
                            MoveButtons->setObjectName("MoveButtons"+QString::number(BTNs));
                            //设置按钮显示文本
                            MoveButtons->setText(BtnTextName);
                            //关联信号槽函数
                            MoveButtons->setBtnDatas(Datas);//赋值数据给按钮 BtnPropertieInit
                            //初始化控件属性
                            MoveButtons->BtnPropertieInit(MoveButtons->text(),Datas,Contorll_H,Contorll_W,Contorll_X,Contorll_Y);//初始化控件属性
                            //点击按钮发送该按钮附带的数据
                            connect(MoveButtons,&MoveButton::movebtn_clicked,this,[=](){slotButtonClicked(MoveButtons->getBtnDatas(),BTNs);});
                            //切换编辑和发送数据模式  按钮也同步切换
                            connect(this,&Serial_Controler::SignalMOdelfalge,MoveButtons,&MoveButton::MyDel);
                            //按钮删除时删除保存的按钮列表
                            connect(MoveButtons,&MoveButton::Signals_DeleteBTN,this,&Serial_Controler::slots_DeleteBTN);
                            //向QList添加成员项
                            btnPushlist.append(MoveButtons);
                            //向QList添加成员项
                            MoveButtonName.append(MoveButtons->text());
                            BTNs++;
                            qDebug()<<"CreatBtnPush"+QString::number(BTNs)<< MoveButtons->objectName()<<"x"<<Contorll_X<<"y"<<Contorll_Y<<"w"<<Contorll_W<<"z"<<Contorll_H<<"数据"<<MoveButtons->getBtnDatas();

                     }
                     //.............................................界面模式：编辑模式/发送界面模式............................................
                     ui->Stop_Recevie_2->setChecked(object.value("SerialmodelSwitch").toBool());
                     SerialmodelSwitch();
                     /*.......................串口载入配置........................................*/
                     ui->COMBOX_ProtSwitch->setCurrentText(object.value("Serial_PortName").toString());
                     ui->checkBox->setCurrentIndex(object.value("Serial_Parity").toInt());
                     ui->dataBox->setCurrentIndex(object.value("Serial_DataBits").toInt());
                     ui->stopBox->setCurrentIndex(object.value("Serial_StopBits").toInt());
                     ui->rateBox->setCurrentText(object.value("Serial_BaudRate").toString());
                     LoadSerialConfig();
                    /*.......................定时载入配置........................................*/
                     ui->Tmer_command1->setText(object.value("TimeSend1").toString());
                     ui->Tmer_command2->setText(object.value("TimeSend2").toString());
                     ui->Tmer_command3->setText(object.value("TimeSend3").toString());
                     ui->Tmer_command4->setText(object.value("TimeChangeSend1").toString());
                     ui->Tmer_command5->setText(object.value("TimeChangeSend2").toString());
                     ui->Tmer_command6->setText(object.value("TimeChangeSend3").toString());
                     ui->TimerMS1->setText(object.value("TimerMs1").toString());
                     ui->TimerMS2->setText(object.value("TimerMs2").toString());
                     ui->TimerMS3->setText(object.value("TimerMs3").toString());
                     ui->TimerMS4->setText(object.value("TimerMs4").toString());
                     ui->Btn_tmieCheckBox->setChecked(object.value("TimeSendState1").toBool());
                     ui->Btn_tmieCheckBox_2->setChecked(object.value("TimeSendState2").toBool());
                     ui->Btn_tmieCheckBox_3->setChecked(object.value("TimeSendState3").toBool());
                     ui->Btn_tmieCheckBox_4->setChecked(object.value("TimeSendState4").toBool());
                     ui->command_CheckBox_3->setChecked(object.value("command_CheckBox3").toBool());

                }
            }




        }

}







