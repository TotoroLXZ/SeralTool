#ifndef MOVEBUTTON_H
#define MOVEBUTTON_H


/***********************************************************
 *版权声明：Copyright (c) 2019 Kongdemin. All rights reserved.
 *许可版本：Corporation　&　Enterprise
 *文件名称：MoveButton.h
 *文件功能：can move button
 *创建作者：kongdemin
 *修改时间：2019-08
 *修订说明：版本 01
************************************************************/

#include <QPushButton>
#include <QWidget>
#include "control_properties.h"
class MoveButton : public QPushButton
{
    Q_OBJECT
public:
    explicit MoveButton(QWidget *parent = nullptr);

    /*........当前按钮的命令............增加动态命令数据.*/
    QList<QByteArray> BtnDataLists;//动态创建按钮的列表
    QByteArray BtnDatas;
    /*........配置当前按钮的命令.....  后期要删掉  做动态改增加命令和删除 修改命令........*/
    void setBtnDatas(QByteArray btndatas);
    /*........获取当前按钮的命令.............*/
    QByteArray getBtnDatas();
    /*........主窗口生成按钮时 配置按钮的所有属性.............*/
    void BtnPropertieInit(QString Namess, QByteArray BTNDatass,int Hightss,int Widthss,int Xss,int Yss);

signals:
    /*........删除当前按钮发信号让删除保存啊按钮列表.............*/
    void Signals_DeleteBTN(QString);
    void movebtn_clicked();

public slots:

    /*........主窗口配置按钮为编辑状态还是发送数据状态.............*/
    void MyDel(int x);
    /*........按钮改变属性-读取按钮属性并更新当前按钮的位置 数据参数.............*/
    void GETBTNS();
    void DELBTNS();

protected:

    void mousePressEvent(QMouseEvent *event);

    void mouseMoveEvent(QMouseEvent *event);

    void keyPressEvent(QKeyEvent *event);

    void mouseDoubleClickEvent(QMouseEvent *event);//双击事件
private:
    //移动开始结束坐标
    QPoint _beginPos;
    QPoint _lastPos;


    int modelfalges=1;  //1编辑模式; 0下发数据模式

    /*........按钮属性窗口.............*/
    Control_properties * control_properties;
};

#endif // MOVEBUTTON_H
