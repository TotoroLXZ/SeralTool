#include "control_properties.h"
#include "ui_control_properties.h"
#include <QDebug>
#include <QRegExpValidator>
Control_properties::Control_properties(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Control_properties)
{
    ui->setupUi(this);

     this->setWindowTitle("控件属性");

    /*.........................lineEdit限制输入..正整数...........................................*/
    QRegExp regx("[1-9][0-9]+$");
    QValidator *validator = new QRegExpValidator(regx, this );
    ui->BTN_hight->setValidator(validator);
    ui->BTN_width->setValidator(validator);

    QRegExp regx2("[0-9][0-9]+$");
    QValidator *validator2 = new QRegExpValidator(regx2, this );
    ui->BTN_X->setValidator(validator2);
    ui->BTN_Y->setValidator(validator2);
}

Control_properties::~Control_properties()
{
    delete ui;
}

 void Control_properties:: InitUI()
 {

     ui->BTN_name->setText(BTN_Name);

     ui->BTN_DATAS->clear();
     ui->BTN_DATAS->appendPlainText(BTN_Datass.toHex());

     ui->BTN_hight->setText(QString::number(BTN_Hight));

     ui->BTN_width->setText(QString::number(BTN_Width));

     ui->BTN_X->setText(QString::number(BTN_Xs));

     ui->BTN_Y->setText(QString::number(BTN_Ys));


 }
 void Control_properties:: ReflashUI(QString Names, QByteArray BTNDatas,int Hights,int Width,int Xs,int Ys)
{
      BTN_Name=Names;
      ui->BTN_name->setText(BTN_Name);

      BTN_Datass=BTNDatas;
      ui->BTN_DATAS->clear();
      ui->BTN_DATAS->appendPlainText(BTN_Datass.toHex());

      BTN_Hight=Hights;
      ui->BTN_hight->setText(QString::number(BTN_Hight));

      BTN_Width=Width;
      ui->BTN_width->setText(QString::number(BTN_Width));

      BTN_Xs=Xs;
      ui->BTN_X->setText(QString::number(BTN_Xs));

      BTN_Ys=Ys;
      ui->BTN_Y->setText(QString::number(BTN_Ys));



}
  void Control_properties:: ReflashXY(int Xss,int Yss)
  {
      BTN_Xs=Xss;
      ui->BTN_X->setText(QString::number(BTN_Xs));

      BTN_Ys=Yss;
      ui->BTN_Y->setText(QString::number(BTN_Ys));

  }

void Control_properties::on_BTN_Set_clicked()
{

    BTN_Name=ui->BTN_name->text();

    QString Data = ui->BTN_DATAS->toPlainText();
    BTN_Datass = QByteArray::fromHex (Data.toLatin1().data());//按十六进制编码发送
    qDebug()<<"更改按钮属性——数据"<<BTN_Datass;

    BTN_Hight=ui->BTN_hight->text().toInt();

    BTN_Width=ui->BTN_width->text().toInt();

    BTN_Xs=ui->BTN_X->text().toInt();

    BTN_Ys=ui->BTN_Y->text().toInt();

    emit SetBTNS();
}
void Control_properties::Getproperties(QString * Names1,QByteArray * BTNDatas1,int *Hights1,int * Width1,int * Xs1,int * Ys1)
{

    * Names1=BTN_Name;
    * BTNDatas1=BTN_Datass;
    * Hights1=BTN_Hight;
    * Width1=BTN_Width;
    * Xs1=BTN_Xs;
    * Ys1=BTN_Ys;

}



void Control_properties::on_BTN_DELETE_clicked()
{
 emit DelBTNS();
 this->close();
}

