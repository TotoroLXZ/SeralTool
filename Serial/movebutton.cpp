#include "movebutton.h"
#include <QMouseEvent>
#include <QDebug>

MoveButton::MoveButton(QWidget *parent) : QPushButton(parent)
{




   this->setCursor(Qt::CrossCursor); //设置鼠标样式
   this->setStyleSheet("QPushButton{background-color: rgb(225, 225, 225);border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                              "QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}"
                                              "QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}");
    control_properties=new Control_properties();




    connect(this->control_properties,&Control_properties::SetBTNS,this,&MoveButton::GETBTNS);
    connect(this->control_properties,&Control_properties::DelBTNS,this,&MoveButton::DELBTNS);



}

void MoveButton::mousePressEvent(QMouseEvent *event)
{
    emit movebtn_clicked();
    if(event->button() == Qt::LeftButton)
    {
        _beginPos = event->pos();
    }
}

void MoveButton::mouseMoveEvent(QMouseEvent *event)
{


    if(modelfalges)
    {
        _lastPos = event->pos();
        qDebug()<<"鼠标位置"<<_lastPos;

        int t_xDistance = _lastPos.x() - _beginPos.x();
        int t_yDistance = _lastPos.y() - _beginPos.y();
//          int t_xDistance = _lastPos.x() - (this->width()/2);
//          int t_yDistance = _lastPos.y() - (this->height()/2);
        if((this->x()+t_xDistance<=parentWidget()->width()-this->width())
                && (this->y()+t_yDistance<=parentWidget()->height()-this->height())
                && this->x()+t_xDistance>=0
                && this->y()+t_yDistance>=0)
        {
            qDebug()<<"鼠标位置挪动"<<this->pos()<<_lastPos.x()<<_lastPos.y()<<"&"<<t_xDistance<<t_yDistance;
            this->move(this->x()+t_xDistance,this->y()+t_yDistance);

            qDebug()<<"控键位置挪动"<<this->pos();
            control_properties->ReflashXY(this->x(),this->y());
        }


    }


}
void MoveButton::keyPressEvent(QKeyEvent *event)
{
    if(modelfalges)
    {

            if(event->key() == Qt::Key_Left)
            {
            if(this->x()-4>=0)
            {
                this->move(this->x()-4,this->y());
                control_properties->ReflashXY(this->x(),this->y());
            }
            }
            else if(event->key() == Qt::Key_Right)
            {
            if(parentWidget()->width()-this->width()-this->x()-4>=0)
            {
                this->move(this->x()+4,this->y());
                control_properties->ReflashXY(this->x(),this->y());
            }
            }
            else if(event->key() == Qt::Key_Up)
            {
            if(this->y()-4>=0)
            {
                this->move(this->x(),this->y()-4);
                control_properties->ReflashXY(this->x(),this->y());
            }
            }
            else if(event->key() == Qt::Key_Down)
            {
            if(parentWidget()->height()-this->height()-this->y()-4>=0)
            {
                this->move(this->x(),this->y()+4);
                control_properties->ReflashXY(this->x(),this->y());
            }
            }
            else if(event->key() == Qt::Key_Delete)
            {
            qDebug()<<"删除控件"<<this->objectName();
            emit Signals_DeleteBTN(this->objectName());
            this->close();

            }
    }

}

void MoveButton::mouseDoubleClickEvent(QMouseEvent *event)//双击事件
{
    if(modelfalges)
    {
        control_properties->show();
        control_properties->InitUI();//每次调出属性窗口 初始化属性参数
    }


}
void MoveButton:: MyDel(int x)
{
    modelfalges=x;
    qDebug()<<"当前控件:"+this->objectName()+"当前模式为（1编辑模式; 0下发数据模式）"<< modelfalges;
    if(modelfalges)
    {
    this->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.494818, y1:0.205, x2:0.528, y2:0.989, stop:0.153409 rgba(30, 21, 23, 57), stop:0.954545 rgba(40, 126, 193, 91));border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                               "QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}"
                                               "QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}");
    this->setCursor(Qt::CrossCursor); //设置鼠标样式
    }
    else
    {
    this->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(87, 93, 92, 255), stop:1 rgba(255, 255, 255, 255));border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                               "QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}"
                                               "QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}");

    this->setCursor(Qt::PointingHandCursor); //设置鼠标样式
    }

}
void MoveButton::DELBTNS()//删除按钮
{
    qDebug()<<"删除控件"<<this->objectName();
    emit Signals_DeleteBTN(this->objectName());
    this->close();

}
void MoveButton::GETBTNS()//改变属性
{
qDebug()<<"改变属性";
QString Names0;
QByteArray BTNDatas0;
int Hights0;
int  Width0;
int  Xs0;
int  Ys0;
control_properties->Getproperties( &Names0,&BTNDatas0,&Hights0,&Width0,&Xs0,&Ys0);

//qDebug()<<"Names0"<<Names0;
//qDebug()<<"BTNDatas0"<<BTNDatas0;
//qDebug()<<"Hights0"<<Hights0;
//qDebug()<<"Width0"<<Width0;
//qDebug()<<"Xs0"<<Xs0;
//qDebug()<<"Ys0"<<Ys0;
this->setText(Names0);
this->BtnDatas=BTNDatas0;
this->resize(Width0,Hights0);
this->move(Xs0,Ys0);
control_properties->close();

this->setStyleSheet("background-color: qlineargradient(spread:pad, x1:0.494818, y1:0.205, x2:0.528, y2:0.989, stop:0.153409 rgba(30, 21, 23, 57), stop:0.954545 rgba(40, 126, 193, 91));border:2px groove gray;border-radius:10px;padding:2px 4px;border-style: outset;}"
                                           "QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}"
                                           "QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}");


}
void MoveButton::setBtnDatas(QByteArray btndatas)
{

BtnDatas=btndatas;
}
QByteArray MoveButton:: getBtnDatas()
{

    return BtnDatas;

}


void MoveButton::BtnPropertieInit(QString Namess, QByteArray BTNDatass,int Hightss,int Widthss,int Xss,int Yss)
{

control_properties->ReflashUI(Namess,BTNDatass,Hightss,Widthss,Xss,Yss);

}
