/********************************************************************************
** Form generated from reading UI file 'control_properties.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTROL_PROPERTIES_H
#define UI_CONTROL_PROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Control_properties
{
public:
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *BTN_name;
    QLabel *label_3;
    QLineEdit *BTN_hight;
    QLabel *label_4;
    QLineEdit *BTN_width;
    QPushButton *BTN_Set;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *BTN_Y;
    QLineEdit *BTN_X;
    QPlainTextEdit *BTN_DATAS;
    QPushButton *BTN_DELETE;
    QWidget *page_2;

    void setupUi(QWidget *Control_properties)
    {
        if (Control_properties->objectName().isEmpty())
            Control_properties->setObjectName(QString::fromUtf8("Control_properties"));
        Control_properties->resize(337, 245);
        Control_properties->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 241, 255);"));
        horizontalLayout = new QHBoxLayout(Control_properties);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(Control_properties);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 110, 81, 20));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 71, 20));
        BTN_name = new QLineEdit(page);
        BTN_name->setObjectName(QString::fromUtf8("BTN_name"));
        BTN_name->setGeometry(QRect(90, 20, 231, 21));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 50, 61, 20));
        BTN_hight = new QLineEdit(page);
        BTN_hight->setObjectName(QString::fromUtf8("BTN_hight"));
        BTN_hight->setGeometry(QRect(90, 50, 71, 21));
        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 50, 71, 20));
        BTN_width = new QLineEdit(page);
        BTN_width->setObjectName(QString::fromUtf8("BTN_width"));
        BTN_width->setGeometry(QRect(240, 50, 81, 21));
        BTN_Set = new QPushButton(page);
        BTN_Set->setObjectName(QString::fromUtf8("BTN_Set"));
        BTN_Set->setGeometry(QRect(240, 219, 81, 21));
        BTN_Set->setStyleSheet(QString::fromUtf8("QPushButton{color: rgb(255, 255, 255); background-color: rgb(20, 70, 130);border:none;border-radius:3px;padding:2px 4px;font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}\n"
"QPushButton:hover{ color: rgb(255, 255, 255);border:none;border-radius:5px;padding:2px 4px;background-color: rgb(190, 190, 190);font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}\n"
"\n"
"\n"
"\n"
""));
        label_5 = new QLabel(page);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(170, 80, 71, 20));
        label_6 = new QLabel(page);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 80, 61, 20));
        BTN_Y = new QLineEdit(page);
        BTN_Y->setObjectName(QString::fromUtf8("BTN_Y"));
        BTN_Y->setGeometry(QRect(240, 80, 81, 21));
        BTN_X = new QLineEdit(page);
        BTN_X->setObjectName(QString::fromUtf8("BTN_X"));
        BTN_X->setGeometry(QRect(90, 80, 71, 21));
        BTN_DATAS = new QPlainTextEdit(page);
        BTN_DATAS->setObjectName(QString::fromUtf8("BTN_DATAS"));
        BTN_DATAS->setGeometry(QRect(20, 130, 301, 81));
        BTN_DATAS->setStyleSheet(QString::fromUtf8(""));
        BTN_DELETE = new QPushButton(page);
        BTN_DELETE->setObjectName(QString::fromUtf8("BTN_DELETE"));
        BTN_DELETE->setGeometry(QRect(20, 220, 91, 21));
        BTN_DELETE->setStyleSheet(QString::fromUtf8("QPushButton{color: rgb(255, 255, 255); background-color: rgb(20, 70, 130);border:none;border-radius:3px;padding:2px 4px;font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}\n"
"QPushButton:hover{ color: rgb(255, 255, 255);border:none;border-radius:5px;padding:2px 4px;background-color: rgb(190, 190, 190);font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}\n"
"\n"
"\n"
"\n"
""));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(Control_properties);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Control_properties);
    } // setupUi

    void retranslateUi(QWidget *Control_properties)
    {
        Control_properties->setWindowTitle(QCoreApplication::translate("Control_properties", "Form", nullptr));
        label->setText(QCoreApplication::translate("Control_properties", "\346\214\211\351\222\256\345\221\275\344\273\244\346\225\260\346\215\256\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("Control_properties", "\346\214\211\351\222\256\345\221\275\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("Control_properties", "\346\214\211\351\222\256\345\256\275\345\272\246\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Control_properties", "\346\214\211\351\222\256\345\256\275\345\272\246\357\274\232", nullptr));
        BTN_Set->setText(QCoreApplication::translate("Control_properties", "\346\233\264\346\224\271\345\261\236\346\200\247", nullptr));
        label_5->setText(QCoreApplication::translate("Control_properties", "\347\253\226\345\220\221\345\235\220\346\240\207Y\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("Control_properties", "\346\250\252\345\220\221\345\235\220\346\240\207X\357\274\232", nullptr));
        BTN_DELETE->setText(QCoreApplication::translate("Control_properties", "\345\210\240\351\231\244\350\257\245\346\216\247\344\273\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Control_properties: public Ui_Control_properties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTROL_PROPERTIES_H
