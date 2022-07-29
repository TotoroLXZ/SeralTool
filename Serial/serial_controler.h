#ifndef SERIAL_CONTROLER_H
#define SERIAL_CONTROLER_H

#include <QWidget>
#include <QSerialPort>
#include<QSerialPortInfo>
#include <QDebug>
#include <QMessageBox>
#include <QTimer>
#include <QMouseEvent>
#include<QEvent>

#include <QPushButton> //Push按钮类
#include <QList> //列表类
#include <QDebug> //QDebug类
#include <QSettings> //QSettings


#include "movebutton.h"
#include "about_developer.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Serial_Controler; }
QT_END_NAMESPACE

class Serial_Controler : public QWidget
{
    Q_OBJECT

public:
    Serial_Controler(QWidget *parent = nullptr);
    ~Serial_Controler();
     QSerialPort global_port;


    /*..................................初始化所有配置..............................*/
     void  SERIAL_Init();


    /*...............初始化所有connect...................*/
     void  Conect_Init();

     void  Prot_Switch();//串口选择
     void  SerialInit();//串口初始化配置
     void  SearchPort();//找端口及配置端口号
     void  on_openBtn_clicked();//开关串口
     void  serial_Read();//串口读取
     void  sendBox_clicked();//串口写数据
     //串口数据配置
     void  checked();
     void  checked2();
     void  checked3();

     void  sbasic_Seting();//界面基础配置
     void  BTN_TimerContorll();//定时发送
     void  time4SwitchSend();//定时切换

     //复位配置
     void  SERIAL_Reset();
     void  Btn_TimerReSet();
     void  MoveButtonReSet();

     //保存和载入配置
     void  SaveConfigFile();
     void  LoadConfigFile();
     void LoadSerialConfig();
     //关软件时保存当前配置
     void CloseSaveConfigIni();
     void OpenLoadConfigIni();
     void SerialmodelSwitch();




     /*.........................关于开发者界面........................*/
     about_developer*about_developers;
     /*.........................自定义增加按钮........................*/
     MoveButton* MoveButtons;
     /*..........................重写鼠标事件.........................*/
     //void mouseMoveEvent(QMouseEvent *e);//重写鼠标事件
     bool enterBtn(QPoint pp,  QPushButton*btn);
     /*..........................窗口移动........................*/
     QPoint windowPos;
     QPoint mousePos;
     QPoint dPos;

     void mousePressEvent(QMouseEvent *event);
     void mouseMoveEvent(QMouseEvent *event);


signals:
    void SignalMOdelfalge(int);

private slots:



     void on_comboBox_currentIndexChanged(int index);

     void on_BTN_creat_clicked(bool checked);

     void on_Stop_Recevie_2_clicked();

     void on_Radio_Times_clicked();

     void on_Radio_Coms_clicked();

     void on_Radio_ComSet_clicked();

     void on_pushButton_clicked();

     /*........删除当前按钮接收信号让删除保存啊按钮列表.............*/
     void slots_DeleteBTN(QString btn);
     /*........点击当前按钮发送该按钮数据.............*/
     void slotButtonClicked(QByteArray datas,int btns);



private:
    Ui::Serial_Controler *ui;
    QTimer *timer = new QTimer(this);
    QTimer *timer2 = new QTimer(this);
    QTimer *timer3 = new QTimer(this);
    QTimer *timer4 = new QTimer(this);

    //动态添加按钮
    QList<MoveButton *> btnPushlist;//动态创建按钮的列表
    QList<QString> Datalist;//动态创建按钮对应发送的数据的列表
    int BTNs=0;
    int Serialmodel=1;   //1编辑模式; 0下发数据模式模式
    QList<QString> MoveButtonName;



};

#endif // SERIAL_CONTROLER_H
