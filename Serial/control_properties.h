#ifndef CONTROL_PROPERTIES_H
#define CONTROL_PROPERTIES_H

#include <QWidget>

namespace Ui {
class Control_properties;
}

class Control_properties : public QWidget
{
    Q_OBJECT

public:
    explicit Control_properties(QWidget *parent = nullptr);
    ~Control_properties();
    QString BTN_Name;
    QByteArray BTN_Datass;
    int BTN_Hight;
    int BTN_Width;
    int BTN_Xs;
    int BTN_Ys;

   /*........主窗口生成按钮时 配置按钮的所有属性.按钮下发属性  配置当前属性参数............*/
    void ReflashUI(QString Names,QByteArray BTNDatas,int Hights,int Width,int Xs,int Ys);
   /*........按钮移动时更新当前属性界面的位置X，Y............*/
    void ReflashXY(int Xss,int Yss);
   /*........界面打开时更行当前的属性............*/
    void InitUI();
   /*........按钮再改变属性时....获取当前的属性参数............*/
    void Getproperties(QString * Names1,QByteArray * BTNDatas1,int *Hights1,int * Width1,int * Xs1,int * Ys1);

private:
    Ui::Control_properties *ui;
signals:
    /*........按钮再改变属性时发送信号............*/
    void SetBTNS();
    void DelBTNS();
private slots:
    /*........改变属性............*/
    void on_BTN_Set_clicked();
    void on_BTN_DELETE_clicked();
};

#endif // CONTROL_PROPERTIES_H
