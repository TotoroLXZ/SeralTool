/********************************************************************************
** Form generated from reading UI file 'serial_controler.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIAL_CONTROLER_H
#define UI_SERIAL_CONTROLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Serial_Controler
{
public:
    QPushButton *BTN_TURNOFF;
    QPushButton *BTN_Minimized;
    QPushButton *pushButtonloge;
    QLabel *label_19;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QComboBox *checkBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QComboBox *dataBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *rateBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QComboBox *stopBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QComboBox *COMBOX_ProtSwitch;
    QPushButton *openBtn;
    QPushButton *pushButton;
    QPushButton *BTN_LoadConfig;
    QPushButton *BTN_ResetConfig;
    QPushButton *BTN_SaveConfig;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_38;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QCheckBox *radioButton;
    QPlainTextEdit *receiveData;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *BTN_CleanReceiver;
    QRadioButton *Stop_Recevie;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QCheckBox *radioButton_2;
    QCheckBox *radioButton_3;
    QPlainTextEdit *sendData;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *BTN_CleanSender;
    QPushButton *SEND;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_12;
    QLineEdit *Tmer_command1;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_13;
    QLineEdit *TimerMS1;
    QCheckBox *Btn_tmieCheckBox;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_14;
    QLineEdit *Tmer_command2;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_15;
    QLineEdit *TimerMS2;
    QCheckBox *Btn_tmieCheckBox_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_16;
    QLineEdit *Tmer_command3;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_17;
    QLineEdit *TimerMS3;
    QCheckBox *Btn_tmieCheckBox_3;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_18;
    QLineEdit *Tmer_command4;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_20;
    QLineEdit *Tmer_command5;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_26;
    QCheckBox *command_CheckBox_3;
    QLineEdit *Tmer_command6;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_27;
    QLineEdit *TimerMS4;
    QCheckBox *Btn_tmieCheckBox_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *Btn_TimerRESet;
    QPushButton *Btn_TimerSeting;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_39;
    QGroupBox *groupBox_8;
    QHBoxLayout *horizontalLayout_34;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_33;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_9;
    QHBoxLayout *horizontalLayout_32;
    QSpacerItem *horizontalSpacer;
    QRadioButton *Stop_Recevie_2;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_25;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_8;
    QLineEdit *Edit_Contorll1Name;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_25;
    QLineEdit *Edit_Contorll_X;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_22;
    QLineEdit *Edit_Contorll_Y;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_24;
    QLineEdit *Edit_Contorll_W;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_23;
    QLineEdit *Edit_Contorll_H;
    QHBoxLayout *horizontalLayout_23;
    QPushButton *BTN_creat;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_9;
    QPlainTextEdit *Edit_Contorll1;
    QWidget *widgetss;
    QCheckBox *Radio_Coms;
    QCheckBox *Radio_Times;
    QCheckBox *Radio_ComSet;

    void setupUi(QWidget *Serial_Controler)
    {
        if (Serial_Controler->objectName().isEmpty())
            Serial_Controler->setObjectName(QString::fromUtf8("Serial_Controler"));
        Serial_Controler->resize(930, 621);
        Serial_Controler->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:reflect, cx:0.853, cy:0.778, radius:1.95, fx:0.671, fy:0.585636, stop:0.215909 rgba(8, 136, 255, 255), stop:0.488636 rgba(68, 204, 255, 255), stop:0.755682 rgba(36, 135, 245, 255));"));
        BTN_TURNOFF = new QPushButton(Serial_Controler);
        BTN_TURNOFF->setObjectName(QString::fromUtf8("BTN_TURNOFF"));
        BTN_TURNOFF->setGeometry(QRect(900, 0, 31, 20));
        BTN_TURNOFF->setCursor(QCursor(Qt::PointingHandCursor));
        BTN_TURNOFF->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
"border:none;"));
        BTN_Minimized = new QPushButton(Serial_Controler);
        BTN_Minimized->setObjectName(QString::fromUtf8("BTN_Minimized"));
        BTN_Minimized->setGeometry(QRect(870, 0, 31, 20));
        BTN_Minimized->setCursor(QCursor(Qt::PointingHandCursor));
        BTN_Minimized->setMouseTracking(true);
        BTN_Minimized->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
"border:none;"));
        pushButtonloge = new QPushButton(Serial_Controler);
        pushButtonloge->setObjectName(QString::fromUtf8("pushButtonloge"));
        pushButtonloge->setGeometry(QRect(0, 0, 31, 31));
        pushButtonloge->setStyleSheet(QString::fromUtf8("background-color: rgba(0, 0, 0, 0);\n"
"border:none;\n"
"image: url(:/firstQrc/QT_ICON/tatal.png);"));
        label_19 = new QLabel(Serial_Controler);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(30, 0, 141, 31));
        label_19->setStyleSheet(QString::fromUtf8("font: 75 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"background-color: rgba(0, 0, 0, 0);\n"
"border:none;"));
        groupBox_5 = new QGroupBox(Serial_Controler);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 40, 601, 21));
        groupBox_5->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0.306818 rgba(197, 216, 229, 229), stop:0.460227 rgba(197, 216, 229, 229), stop:0.636364 rgba(197, 216, 229, 229), stop:0.738636 rgba(197, 216, 229, 229));\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_5);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(70, 16777215));
        label_7->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(label_7);

        checkBox = new QComboBox(groupBox_5);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(checkBox);


        horizontalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_2->addWidget(label_6);

        dataBox = new QComboBox(groupBox_5);
        dataBox->addItem(QString());
        dataBox->addItem(QString());
        dataBox->addItem(QString());
        dataBox->addItem(QString());
        dataBox->setObjectName(QString::fromUtf8("dataBox"));
        dataBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(dataBox);


        horizontalLayout_6->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_3->addWidget(label_5);

        rateBox = new QComboBox(groupBox_5);
        rateBox->setObjectName(QString::fromUtf8("rateBox"));
        rateBox->setLayoutDirection(Qt::LeftToRight);
        rateBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        rateBox->setMinimumContentsLength(0);

        horizontalLayout_3->addWidget(rateBox);


        horizontalLayout_6->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(groupBox_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_4->addWidget(label_4);

        stopBox = new QComboBox(groupBox_5);
        stopBox->addItem(QString());
        stopBox->addItem(QString());
        stopBox->setObjectName(QString::fromUtf8("stopBox"));
        stopBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(stopBox);


        horizontalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_5->addWidget(label_3);

        COMBOX_ProtSwitch = new QComboBox(groupBox_5);
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->addItem(QString());
        COMBOX_ProtSwitch->setObjectName(QString::fromUtf8("COMBOX_ProtSwitch"));
        COMBOX_ProtSwitch->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(COMBOX_ProtSwitch);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        openBtn = new QPushButton(groupBox_5);
        openBtn->setObjectName(QString::fromUtf8("openBtn"));
        openBtn->setMaximumSize(QSize(16777215, 16777215));
        openBtn->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
""));

        horizontalLayout_6->addWidget(openBtn);

        pushButton = new QPushButton(Serial_Controler);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(790, 0, 41, 21));
        BTN_LoadConfig = new QPushButton(Serial_Controler);
        BTN_LoadConfig->setObjectName(QString::fromUtf8("BTN_LoadConfig"));
        BTN_LoadConfig->setGeometry(QRect(580, 0, 64, 21));
        BTN_LoadConfig->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{color: rgb(255, 255, 255);font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(20, 70, 130, 255), stop:1 rgba(152, 150, 150, 255));border:2px groove gray;border-radius:6px;padding:2px 4px;border-style: outset;}\n"
"\n"
"QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        BTN_ResetConfig = new QPushButton(Serial_Controler);
        BTN_ResetConfig->setObjectName(QString::fromUtf8("BTN_ResetConfig"));
        BTN_ResetConfig->setGeometry(QRect(720, 0, 64, 21));
        BTN_ResetConfig->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{color: rgb(255, 255, 255);font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(20, 70, 130, 255), stop:1 rgba(152, 150, 150, 255));border:2px groove gray;border-radius:6px;padding:2px 4px;border-style: outset;}\n"
"\n"
"QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        BTN_SaveConfig = new QPushButton(Serial_Controler);
        BTN_SaveConfig->setObjectName(QString::fromUtf8("BTN_SaveConfig"));
        BTN_SaveConfig->setGeometry(QRect(650, 0, 64, 21));
        BTN_SaveConfig->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{color: rgb(255, 255, 255);font: 75 10pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(20, 70, 130, 255), stop:1 rgba(152, 150, 150, 255));border:2px groove gray;border-radius:6px;padding:2px 4px;border-style: outset;}\n"
"\n"
"QPushButton:hover{background-color:rgb(229, 241, 251); color: black;}\n"
"QPushButton:pressed{background-color:rgb(204, 228, 247);border-style: inset;}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        stackedWidget = new QStackedWidget(Serial_Controler);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(5, 60, 921, 551));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 241, 255);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout_38 = new QHBoxLayout(page);
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        groupBox_6 = new QGroupBox(page);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_5 = new QVBoxLayout(groupBox_6);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(10, 3, 10, 3);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(180);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_2 = new QLabel(groupBox_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_7->addWidget(label_2);

        radioButton = new QCheckBox(groupBox_6);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        radioButton->setChecked(true);

        horizontalLayout_7->addWidget(radioButton);


        verticalLayout_3->addLayout(horizontalLayout_7);

        receiveData = new QPlainTextEdit(groupBox_6);
        receiveData->setObjectName(QString::fromUtf8("receiveData"));
        receiveData->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(receiveData);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(180);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        BTN_CleanReceiver = new QPushButton(groupBox_6);
        BTN_CleanReceiver->setObjectName(QString::fromUtf8("BTN_CleanReceiver"));
        BTN_CleanReceiver->setStyleSheet(QString::fromUtf8("QPushButton{color: rgb(255, 255, 255); background-color: rgb(91, 120, 119);border:none;border-radius:3px;padding:2px 4px;font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}\n"
"QPushButton:hover{ color: rgb(255, 255, 255);border:none;border-radius:5px;padding:2px 4px;background-color: rgb(190, 190, 190);font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_8->addWidget(BTN_CleanReceiver);

        Stop_Recevie = new QRadioButton(groupBox_6);
        Stop_Recevie->setObjectName(QString::fromUtf8("Stop_Recevie"));

        horizontalLayout_8->addWidget(Stop_Recevie);


        verticalLayout_3->addLayout(horizontalLayout_8);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label = new QLabel(groupBox_6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_10->addWidget(label);

        radioButton_2 = new QCheckBox(groupBox_6);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_10->addWidget(radioButton_2);

        radioButton_3 = new QCheckBox(groupBox_6);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        radioButton_3->setChecked(true);

        horizontalLayout_10->addWidget(radioButton_3);


        verticalLayout_2->addLayout(horizontalLayout_10);

        sendData = new QPlainTextEdit(groupBox_6);
        sendData->setObjectName(QString::fromUtf8("sendData"));
        sendData->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(sendData);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(180);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        BTN_CleanSender = new QPushButton(groupBox_6);
        BTN_CleanSender->setObjectName(QString::fromUtf8("BTN_CleanSender"));
        BTN_CleanSender->setStyleSheet(QString::fromUtf8("QPushButton{color: rgb(255, 255, 255); background-color: rgb(91, 120, 119);border:none;border-radius:3px;padding:2px 4px;font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}\n"
"QPushButton:hover{ color: rgb(255, 255, 255);border:none;border-radius:5px;padding:2px 4px;background-color: rgb(190, 190, 190);font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_11->addWidget(BTN_CleanSender);

        SEND = new QPushButton(groupBox_6);
        SEND->setObjectName(QString::fromUtf8("SEND"));
        SEND->setStyleSheet(QString::fromUtf8("QPushButton{color: rgb(255, 255, 255); background-color: rgb(0, 155, 76);border:none;border-radius:3px;padding:2px 4px;font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}\n"
"QPushButton:hover{ color: rgb(255, 255, 255);border:none;border-radius:5px;padding:2px 4px;background-color: rgb(190, 190, 190);font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_11->addWidget(SEND);


        verticalLayout_2->addLayout(horizontalLayout_11);


        verticalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_5->addLayout(verticalLayout_4);


        horizontalLayout_38->addWidget(groupBox_6);

        groupBox_3 = new QGroupBox(page);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMaximumSize(QSize(350, 16777215));
        groupBox_3->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        verticalLayout_12 = new QVBoxLayout(groupBox_3);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(9, 0, -1, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_15->addWidget(label_12);

        Tmer_command1 = new QLineEdit(groupBox_3);
        Tmer_command1->setObjectName(QString::fromUtf8("Tmer_command1"));
        Tmer_command1->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 246, 255);"));

        horizontalLayout_15->addWidget(Tmer_command1);


        verticalLayout->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(17);
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_16->addWidget(label_13);

        TimerMS1 = new QLineEdit(groupBox_3);
        TimerMS1->setObjectName(QString::fromUtf8("TimerMS1"));
        TimerMS1->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 246, 255);"));

        horizontalLayout_16->addWidget(TimerMS1);

        Btn_tmieCheckBox = new QCheckBox(groupBox_3);
        Btn_tmieCheckBox->setObjectName(QString::fromUtf8("Btn_tmieCheckBox"));
        Btn_tmieCheckBox->setCheckable(true);

        horizontalLayout_16->addWidget(Btn_tmieCheckBox);


        verticalLayout->addLayout(horizontalLayout_16);


        verticalLayout_12->addLayout(verticalLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_17->addWidget(label_14);

        Tmer_command2 = new QLineEdit(groupBox_3);
        Tmer_command2->setObjectName(QString::fromUtf8("Tmer_command2"));
        Tmer_command2->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 246, 255);"));

        horizontalLayout_17->addWidget(Tmer_command2);


        verticalLayout_6->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(17);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_18->addWidget(label_15);

        TimerMS2 = new QLineEdit(groupBox_3);
        TimerMS2->setObjectName(QString::fromUtf8("TimerMS2"));
        TimerMS2->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 246, 255);"));

        horizontalLayout_18->addWidget(TimerMS2);

        Btn_tmieCheckBox_2 = new QCheckBox(groupBox_3);
        Btn_tmieCheckBox_2->setObjectName(QString::fromUtf8("Btn_tmieCheckBox_2"));
        Btn_tmieCheckBox_2->setCheckable(true);
        Btn_tmieCheckBox_2->setChecked(false);

        horizontalLayout_18->addWidget(Btn_tmieCheckBox_2);


        verticalLayout_6->addLayout(horizontalLayout_18);


        verticalLayout_12->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_19->addWidget(label_16);

        Tmer_command3 = new QLineEdit(groupBox_3);
        Tmer_command3->setObjectName(QString::fromUtf8("Tmer_command3"));
        Tmer_command3->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 246, 255);"));

        horizontalLayout_19->addWidget(Tmer_command3);


        verticalLayout_7->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(17);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_20->addWidget(label_17);

        TimerMS3 = new QLineEdit(groupBox_3);
        TimerMS3->setObjectName(QString::fromUtf8("TimerMS3"));
        TimerMS3->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 246, 255);"));

        horizontalLayout_20->addWidget(TimerMS3);

        Btn_tmieCheckBox_3 = new QCheckBox(groupBox_3);
        Btn_tmieCheckBox_3->setObjectName(QString::fromUtf8("Btn_tmieCheckBox_3"));

        horizontalLayout_20->addWidget(Btn_tmieCheckBox_3);


        verticalLayout_7->addLayout(horizontalLayout_20);


        verticalLayout_12->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(9);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setStyleSheet(QString::fromUtf8("color: rgb(255, 51, 15);"));

        horizontalLayout_21->addWidget(label_18);

        Tmer_command4 = new QLineEdit(groupBox_3);
        Tmer_command4->setObjectName(QString::fromUtf8("Tmer_command4"));
        Tmer_command4->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 246, 255);"));

        horizontalLayout_21->addWidget(Tmer_command4);


        verticalLayout_8->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setStyleSheet(QString::fromUtf8("color: rgb(255, 51, 15);"));

        horizontalLayout_22->addWidget(label_20);

        Tmer_command5 = new QLineEdit(groupBox_3);
        Tmer_command5->setObjectName(QString::fromUtf8("Tmer_command5"));
        Tmer_command5->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 246, 255);"));

        horizontalLayout_22->addWidget(Tmer_command5);


        verticalLayout_8->addLayout(horizontalLayout_22);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setStyleSheet(QString::fromUtf8("color: rgb(255, 51, 15);"));

        horizontalLayout_35->addWidget(label_26);

        command_CheckBox_3 = new QCheckBox(groupBox_3);
        command_CheckBox_3->setObjectName(QString::fromUtf8("command_CheckBox_3"));

        horizontalLayout_35->addWidget(command_CheckBox_3);

        Tmer_command6 = new QLineEdit(groupBox_3);
        Tmer_command6->setObjectName(QString::fromUtf8("Tmer_command6"));
        Tmer_command6->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 246, 255);"));

        horizontalLayout_35->addWidget(Tmer_command6);


        verticalLayout_8->addLayout(horizontalLayout_35);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(10);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        label_27 = new QLabel(groupBox_3);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_36->addWidget(label_27);

        TimerMS4 = new QLineEdit(groupBox_3);
        TimerMS4->setObjectName(QString::fromUtf8("TimerMS4"));
        TimerMS4->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 246, 255);"));

        horizontalLayout_36->addWidget(TimerMS4);

        Btn_tmieCheckBox_4 = new QCheckBox(groupBox_3);
        Btn_tmieCheckBox_4->setObjectName(QString::fromUtf8("Btn_tmieCheckBox_4"));

        horizontalLayout_36->addWidget(Btn_tmieCheckBox_4);


        verticalLayout_8->addLayout(horizontalLayout_36);


        verticalLayout_12->addLayout(verticalLayout_8);

        widget = new QWidget(groupBox_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 40));
        widget->setMaximumSize(QSize(1969999, 40));
        horizontalLayout_9 = new QHBoxLayout(widget);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        Btn_TimerRESet = new QPushButton(widget);
        Btn_TimerRESet->setObjectName(QString::fromUtf8("Btn_TimerRESet"));
        Btn_TimerRESet->setStyleSheet(QString::fromUtf8("QPushButton{color: rgb(255, 255, 255); background-color: rgb(91, 120, 119);border:none;border-radius:3px;padding:2px 4px;font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}\n"
"QPushButton:hover{ color: rgb(255, 255, 255);border:none;border-radius:5px;padding:2px 4px;background-color: rgb(190, 190, 190);font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_9->addWidget(Btn_TimerRESet);

        Btn_TimerSeting = new QPushButton(widget);
        Btn_TimerSeting->setObjectName(QString::fromUtf8("Btn_TimerSeting"));
        Btn_TimerSeting->setStyleSheet(QString::fromUtf8("QPushButton{color: rgb(255, 255, 255); background-color: rgb(0, 155, 76);border:none;border-radius:3px;padding:2px 4px;font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}\n"
"QPushButton:hover{ color: rgb(255, 255, 255);border:none;border-radius:5px;padding:2px 4px;background-color: rgb(190, 190, 190);font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_9->addWidget(Btn_TimerSeting);


        verticalLayout_12->addWidget(widget);


        horizontalLayout_38->addWidget(groupBox_3);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        horizontalLayout_39 = new QHBoxLayout(page_2);
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        groupBox_8 = new QGroupBox(page_2);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        groupBox_8->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0.306818 rgba(197, 216, 229, 229), stop:0.460227 rgba(197, 216, 229, 229), stop:0.636364 rgba(197, 216, 229, 229), stop:0.738636 rgba(197, 216, 229, 229));\n"
"font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        horizontalLayout_34 = new QHBoxLayout(groupBox_8);
        horizontalLayout_34->setSpacing(0);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        horizontalLayout_34->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(groupBox_8);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 241, 255);"));
        horizontalLayout_33 = new QHBoxLayout(groupBox);
        horizontalLayout_33->setSpacing(0);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        horizontalLayout_33->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        groupBox_9 = new QGroupBox(groupBox);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        groupBox_9->setMaximumSize(QSize(16777215, 20));
        groupBox_9->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 241, 255);\n"
"border:none;"));
        horizontalLayout_32 = new QHBoxLayout(groupBox_9);
        horizontalLayout_32->setSpacing(0);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        horizontalLayout_32->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_32->addItem(horizontalSpacer);

        Stop_Recevie_2 = new QRadioButton(groupBox_9);
        Stop_Recevie_2->setObjectName(QString::fromUtf8("Stop_Recevie_2"));
        Stop_Recevie_2->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";\n"
"color: rgb(255, 11, 35);\n"
"\n"
"\n"
"\n"
""));
        Stop_Recevie_2->setChecked(false);

        horizontalLayout_32->addWidget(Stop_Recevie_2);


        verticalLayout_11->addWidget(groupBox_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, -1, -1, 0);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 70));
        groupBox_2->setMaximumSize(QSize(16777215, 70));
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(217, 241, 255);"));
        verticalLayout_9 = new QVBoxLayout(groupBox_2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(3, 3, 3, 3);
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_24->addWidget(label_8);

        Edit_Contorll1Name = new QLineEdit(groupBox_2);
        Edit_Contorll1Name->setObjectName(QString::fromUtf8("Edit_Contorll1Name"));
        Edit_Contorll1Name->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 246, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_24->addWidget(Edit_Contorll1Name);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(0);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_31->addWidget(label_21);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        label_25 = new QLabel(groupBox_2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setMinimumSize(QSize(20, 0));
        label_25->setMaximumSize(QSize(20, 16777215));
        label_25->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_27->addWidget(label_25);

        Edit_Contorll_X = new QLineEdit(groupBox_2);
        Edit_Contorll_X->setObjectName(QString::fromUtf8("Edit_Contorll_X"));
        Edit_Contorll_X->setMinimumSize(QSize(80, 0));
        Edit_Contorll_X->setMaximumSize(QSize(80, 16777215));
        Edit_Contorll_X->setCursor(QCursor(Qt::IBeamCursor));
        Edit_Contorll_X->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 246, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_27->addWidget(Edit_Contorll_X);


        horizontalLayout_31->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(20, 0));
        label_22->setMaximumSize(QSize(20, 16777215));
        label_22->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_28->addWidget(label_22);

        Edit_Contorll_Y = new QLineEdit(groupBox_2);
        Edit_Contorll_Y->setObjectName(QString::fromUtf8("Edit_Contorll_Y"));
        Edit_Contorll_Y->setMinimumSize(QSize(80, 0));
        Edit_Contorll_Y->setMaximumSize(QSize(80, 16777215));
        Edit_Contorll_Y->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 246, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_28->addWidget(Edit_Contorll_Y);


        horizontalLayout_31->addLayout(horizontalLayout_28);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setMinimumSize(QSize(20, 0));
        label_24->setMaximumSize(QSize(20, 16777215));
        label_24->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_29->addWidget(label_24);

        Edit_Contorll_W = new QLineEdit(groupBox_2);
        Edit_Contorll_W->setObjectName(QString::fromUtf8("Edit_Contorll_W"));
        Edit_Contorll_W->setMinimumSize(QSize(80, 0));
        Edit_Contorll_W->setMaximumSize(QSize(80, 16777215));
        Edit_Contorll_W->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 246, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_29->addWidget(Edit_Contorll_W);


        horizontalLayout_31->addLayout(horizontalLayout_29);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMinimumSize(QSize(20, 0));
        label_23->setMaximumSize(QSize(20, 16777215));
        label_23->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_30->addWidget(label_23);

        Edit_Contorll_H = new QLineEdit(groupBox_2);
        Edit_Contorll_H->setObjectName(QString::fromUtf8("Edit_Contorll_H"));
        Edit_Contorll_H->setMinimumSize(QSize(80, 0));
        Edit_Contorll_H->setMaximumSize(QSize(80, 16777215));
        Edit_Contorll_H->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 246, 255);\n"
"font: 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_30->addWidget(Edit_Contorll_H);


        horizontalLayout_31->addLayout(horizontalLayout_30);


        horizontalLayout_24->addLayout(horizontalLayout_31);


        horizontalLayout_25->addLayout(horizontalLayout_24);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        BTN_creat = new QPushButton(groupBox_2);
        BTN_creat->setObjectName(QString::fromUtf8("BTN_creat"));
        BTN_creat->setStyleSheet(QString::fromUtf8("QPushButton{color: rgb(255, 255, 255); background-color: rgb(20, 70, 130);border:none;border-radius:3px;padding:2px 4px;font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}\n"
"QPushButton:hover{ color: rgb(255, 255, 255);border:none;border-radius:5px;padding:2px 4px;background-color: rgb(190, 190, 190);font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";}\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_23->addWidget(BTN_creat);


        horizontalLayout_25->addLayout(horizontalLayout_23);


        verticalLayout_9->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: 75 9pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout_26->addWidget(label_9);

        Edit_Contorll1 = new QPlainTextEdit(groupBox_2);
        Edit_Contorll1->setObjectName(QString::fromUtf8("Edit_Contorll1"));
        Edit_Contorll1->setStyleSheet(QString::fromUtf8("background-color: rgb(229, 246, 255);"));

        horizontalLayout_26->addWidget(Edit_Contorll1);


        verticalLayout_9->addLayout(horizontalLayout_26);


        verticalLayout_10->addWidget(groupBox_2);

        widgetss = new QWidget(groupBox);
        widgetss->setObjectName(QString::fromUtf8("widgetss"));
        widgetss->setStyleSheet(QString::fromUtf8("QWidget {background-color: rgb(181, 220, 255); }\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));

        verticalLayout_10->addWidget(widgetss);


        verticalLayout_11->addLayout(verticalLayout_10);


        horizontalLayout_33->addLayout(verticalLayout_11);


        horizontalLayout_34->addWidget(groupBox);


        horizontalLayout_39->addWidget(groupBox_8);

        stackedWidget->addWidget(page_2);
        Radio_Coms = new QCheckBox(Serial_Controler);
        Radio_Coms->setObjectName(QString::fromUtf8("Radio_Coms"));
        Radio_Coms->setGeometry(QRect(690, 40, 71, 18));
        Radio_Times = new QCheckBox(Serial_Controler);
        Radio_Times->setObjectName(QString::fromUtf8("Radio_Times"));
        Radio_Times->setGeometry(QRect(770, 40, 71, 18));
        Radio_Times->setChecked(true);
        Radio_ComSet = new QCheckBox(Serial_Controler);
        Radio_ComSet->setObjectName(QString::fromUtf8("Radio_ComSet"));
        Radio_ComSet->setGeometry(QRect(850, 40, 71, 18));
        Radio_ComSet->setChecked(true);

        retranslateUi(Serial_Controler);

        dataBox->setCurrentIndex(3);
        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Serial_Controler);
    } // setupUi

    void retranslateUi(QWidget *Serial_Controler)
    {
        Serial_Controler->setWindowTitle(QCoreApplication::translate("Serial_Controler", "Serial_Controler", nullptr));
        BTN_TURNOFF->setText(QString());
        BTN_Minimized->setText(QString());
        pushButtonloge->setText(QString());
        label_19->setText(QCoreApplication::translate("Serial_Controler", " Serial Controller", nullptr));
        groupBox_5->setTitle(QString());
        label_7->setText(QCoreApplication::translate("Serial_Controler", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("Serial_Controler", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        dataBox->setItemText(0, QCoreApplication::translate("Serial_Controler", "5", nullptr));
        dataBox->setItemText(1, QCoreApplication::translate("Serial_Controler", "6", nullptr));
        dataBox->setItemText(2, QCoreApplication::translate("Serial_Controler", "7", nullptr));
        dataBox->setItemText(3, QCoreApplication::translate("Serial_Controler", "8", nullptr));

        label_5->setText(QCoreApplication::translate("Serial_Controler", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("Serial_Controler", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        stopBox->setItemText(0, QCoreApplication::translate("Serial_Controler", "1", nullptr));
        stopBox->setItemText(1, QCoreApplication::translate("Serial_Controler", "2", nullptr));

        label_3->setText(QCoreApplication::translate("Serial_Controler", "\344\270\262\345\217\243\345\217\267\357\274\232", nullptr));
        COMBOX_ProtSwitch->setItemText(0, QCoreApplication::translate("Serial_Controler", "COM1", nullptr));
        COMBOX_ProtSwitch->setItemText(1, QCoreApplication::translate("Serial_Controler", "COM2", nullptr));
        COMBOX_ProtSwitch->setItemText(2, QCoreApplication::translate("Serial_Controler", "COM3", nullptr));
        COMBOX_ProtSwitch->setItemText(3, QCoreApplication::translate("Serial_Controler", "COM4", nullptr));
        COMBOX_ProtSwitch->setItemText(4, QCoreApplication::translate("Serial_Controler", "COM5", nullptr));
        COMBOX_ProtSwitch->setItemText(5, QCoreApplication::translate("Serial_Controler", "COM6", nullptr));
        COMBOX_ProtSwitch->setItemText(6, QCoreApplication::translate("Serial_Controler", "COM7", nullptr));
        COMBOX_ProtSwitch->setItemText(7, QCoreApplication::translate("Serial_Controler", "COM8", nullptr));
        COMBOX_ProtSwitch->setItemText(8, QCoreApplication::translate("Serial_Controler", "COM9", nullptr));
        COMBOX_ProtSwitch->setItemText(9, QCoreApplication::translate("Serial_Controler", "COM10", nullptr));
        COMBOX_ProtSwitch->setItemText(10, QCoreApplication::translate("Serial_Controler", "COM11", nullptr));
        COMBOX_ProtSwitch->setItemText(11, QCoreApplication::translate("Serial_Controler", "COM12", nullptr));
        COMBOX_ProtSwitch->setItemText(12, QCoreApplication::translate("Serial_Controler", "COM13", nullptr));
        COMBOX_ProtSwitch->setItemText(13, QCoreApplication::translate("Serial_Controler", "COM14", nullptr));
        COMBOX_ProtSwitch->setItemText(14, QCoreApplication::translate("Serial_Controler", "COM15", nullptr));
        COMBOX_ProtSwitch->setItemText(15, QCoreApplication::translate("Serial_Controler", "COM16", nullptr));
        COMBOX_ProtSwitch->setItemText(16, QCoreApplication::translate("Serial_Controler", "COM17", nullptr));
        COMBOX_ProtSwitch->setItemText(17, QCoreApplication::translate("Serial_Controler", "COM18", nullptr));
        COMBOX_ProtSwitch->setItemText(18, QCoreApplication::translate("Serial_Controler", "COM19", nullptr));
        COMBOX_ProtSwitch->setItemText(19, QCoreApplication::translate("Serial_Controler", "COM20", nullptr));

        openBtn->setText(QCoreApplication::translate("Serial_Controler", "     \345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        pushButton->setText(QCoreApplication::translate("Serial_Controler", "\345\205\263\344\272\216", nullptr));
        BTN_LoadConfig->setText(QCoreApplication::translate("Serial_Controler", "\350\275\275\345\205\245\351\205\215\347\275\256", nullptr));
        BTN_ResetConfig->setText(QCoreApplication::translate("Serial_Controler", "\345\244\215\344\275\215\351\205\215\347\275\256", nullptr));
        BTN_SaveConfig->setText(QCoreApplication::translate("Serial_Controler", "\344\277\235\345\255\230\351\205\215\347\275\256", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("Serial_Controler", "\344\270\262\345\217\243\345\212\237\350\203\275", nullptr));
        label_2->setText(QCoreApplication::translate("Serial_Controler", "\350\276\223\345\205\245\347\252\227\345\217\243\357\274\232", nullptr));
        radioButton->setText(QCoreApplication::translate("Serial_Controler", "\345\215\201\345\205\255\350\277\233\345\210\266\346\230\276\347\244\272", nullptr));
        BTN_CleanReceiver->setText(QCoreApplication::translate("Serial_Controler", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", nullptr));
        Stop_Recevie->setText(QCoreApplication::translate("Serial_Controler", "\345\201\234\346\255\242\346\230\276\347\244\272", nullptr));
        label->setText(QCoreApplication::translate("Serial_Controler", "\350\276\223\345\207\272\347\252\227\345\217\243\357\274\232", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Serial_Controler", "\346\217\222\345\205\245\346\215\242\350\241\214", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Serial_Controler", "\345\215\201\345\205\255\350\277\233\345\210\266\350\276\223\345\205\245", nullptr));
        BTN_CleanSender->setText(QCoreApplication::translate("Serial_Controler", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        SEND->setText(QCoreApplication::translate("Serial_Controler", "\345\217\221\351\200\201", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("Serial_Controler", "\345\256\232\346\227\266\345\217\221\351\200\201/\345\256\232\346\227\266\345\210\207\346\215\242 \345\212\237\350\203\275", nullptr));
        label_12->setText(QCoreApplication::translate("Serial_Controler", "\345\256\232\346\227\266\345\217\221\351\200\201 \345\221\275\344\273\2441:", nullptr));
        label_13->setText(QCoreApplication::translate("Serial_Controler", "\345\256\232\346\227\266\346\227\266\351\225\277/\346\257\253\347\247\222ms:", nullptr));
        TimerMS1->setText(QCoreApplication::translate("Serial_Controler", "1", nullptr));
        Btn_tmieCheckBox->setText(QCoreApplication::translate("Serial_Controler", "\345\274\200\345\220\257\345\256\232\346\227\266\345\217\221\351\200\2011", nullptr));
        label_14->setText(QCoreApplication::translate("Serial_Controler", "\345\256\232\346\227\266\345\217\221\351\200\201 \345\221\275\344\273\2442:", nullptr));
        label_15->setText(QCoreApplication::translate("Serial_Controler", "\345\256\232\346\227\266\346\227\266\351\225\277/\346\257\253\347\247\222ms:", nullptr));
        TimerMS2->setText(QCoreApplication::translate("Serial_Controler", "1", nullptr));
        Btn_tmieCheckBox_2->setText(QCoreApplication::translate("Serial_Controler", "\345\274\200\345\220\257\345\256\232\346\227\266\345\217\221\351\200\2012", nullptr));
        label_16->setText(QCoreApplication::translate("Serial_Controler", "\345\256\232\346\227\266\345\217\221\351\200\201 \345\221\275\344\273\2443:", nullptr));
        label_17->setText(QCoreApplication::translate("Serial_Controler", "\345\256\232\346\227\266\346\227\266\351\225\277/\346\257\253\347\247\222ms:", nullptr));
        TimerMS3->setText(QCoreApplication::translate("Serial_Controler", "1", nullptr));
        Btn_tmieCheckBox_3->setText(QCoreApplication::translate("Serial_Controler", "\345\274\200\345\220\257\345\256\232\346\227\266\345\217\221\351\200\2013", nullptr));
        label_18->setText(QCoreApplication::translate("Serial_Controler", "\345\210\207\346\215\242\345\221\275\344\273\2441:", nullptr));
        label_20->setText(QCoreApplication::translate("Serial_Controler", "\345\210\207\346\215\242\345\221\275\344\273\2442:", nullptr));
        label_26->setText(QCoreApplication::translate("Serial_Controler", "\345\210\207\346\215\242\345\221\275\344\273\2443:", nullptr));
        command_CheckBox_3->setText(QString());
        label_27->setText(QCoreApplication::translate("Serial_Controler", " \345\256\232\346\227\266\345\210\207\346\215\242\346\227\266\351\225\277/\346\257\253\347\247\222ms:", nullptr));
        TimerMS4->setText(QCoreApplication::translate("Serial_Controler", "1", nullptr));
        Btn_tmieCheckBox_4->setText(QCoreApplication::translate("Serial_Controler", "\345\274\200\345\220\257\345\256\232\346\227\266\345\210\207\346\215\242", nullptr));
        Btn_TimerRESet->setText(QCoreApplication::translate("Serial_Controler", "\345\244\215\344\275\215", nullptr));
#if QT_CONFIG(tooltip)
        Btn_TimerSeting->setToolTip(QCoreApplication::translate("Serial_Controler", "\350\256\276\347\275\256\345\256\232\346\227\266\345\212\237\350\203\275", nullptr));
#endif // QT_CONFIG(tooltip)
        Btn_TimerSeting->setText(QCoreApplication::translate("Serial_Controler", "\350\256\276\347\275\256", nullptr));
        groupBox_8->setTitle(QString());
        groupBox->setTitle(QString());
        groupBox_9->setTitle(QString());
        Stop_Recevie_2->setText(QCoreApplication::translate("Serial_Controler", "\347\274\226\350\276\221\346\250\241\345\274\217", nullptr));
        groupBox_2->setTitle(QString());
        label_8->setText(QCoreApplication::translate("Serial_Controler", "\345\221\275\345\220\215\346\216\247\351\224\256\357\274\232", nullptr));
        label_21->setText(QCoreApplication::translate("Serial_Controler", "\346\216\247\344\273\266\345\261\236\346\200\247\357\274\232 ", nullptr));
        label_25->setText(QCoreApplication::translate("Serial_Controler", "X:", nullptr));
        Edit_Contorll_X->setText(QCoreApplication::translate("Serial_Controler", "0", nullptr));
        label_22->setText(QCoreApplication::translate("Serial_Controler", "Y:", nullptr));
        Edit_Contorll_Y->setText(QCoreApplication::translate("Serial_Controler", "0", nullptr));
        label_24->setText(QCoreApplication::translate("Serial_Controler", "W:", nullptr));
        Edit_Contorll_W->setText(QCoreApplication::translate("Serial_Controler", "50", nullptr));
        label_23->setText(QCoreApplication::translate("Serial_Controler", "H:", nullptr));
        Edit_Contorll_H->setText(QCoreApplication::translate("Serial_Controler", "50", nullptr));
        BTN_creat->setText(QCoreApplication::translate("Serial_Controler", "\346\226\260\345\273\272\346\214\211\351\222\256", nullptr));
        label_9->setText(QCoreApplication::translate("Serial_Controler", "\350\256\276\347\275\256\345\221\275\344\273\244\357\274\232", nullptr));
        Radio_Coms->setText(QCoreApplication::translate("Serial_Controler", "\344\270\262\345\217\243\345\212\237\350\203\275", nullptr));
        Radio_Times->setText(QCoreApplication::translate("Serial_Controler", "\344\270\212\344\275\215\346\234\272\345\212\237\350\203\275", nullptr));
        Radio_ComSet->setText(QCoreApplication::translate("Serial_Controler", "\344\270\262\345\217\243\351\205\215\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Serial_Controler: public Ui_Serial_Controler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIAL_CONTROLER_H
