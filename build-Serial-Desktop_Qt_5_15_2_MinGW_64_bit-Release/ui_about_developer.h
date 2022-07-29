/********************************************************************************
** Form generated from reading UI file 'about_developer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_DEVELOPER_H
#define UI_ABOUT_DEVELOPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_about_developer
{
public:
    QLabel *label;

    void setupUi(QWidget *about_developer)
    {
        if (about_developer->objectName().isEmpty())
            about_developer->setObjectName(QString::fromUtf8("about_developer"));
        about_developer->resize(400, 300);
        label = new QLabel(about_developer);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 40, 281, 191));
        label->setStyleSheet(QString::fromUtf8("font: 75 11pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        retranslateUi(about_developer);

        QMetaObject::connectSlotsByName(about_developer);
    } // setupUi

    void retranslateUi(QWidget *about_developer)
    {
        about_developer->setWindowTitle(QCoreApplication::translate("about_developer", "Form", nullptr));
        label->setText(QCoreApplication::translate("about_developer", "\350\275\257\344\273\266\347\224\261TOTORO\344\270\252\344\272\272\345\210\233\344\275\234-\346\265\213\350\257\225\347\211\210V2\343\200\202\n"
"\346\227\240\345\225\206\344\270\232\345\220\210\344\275\234\357\274\214\345\205\215\350\264\271\346\217\220\344\276\233\344\275\277\347\224\250\343\200\202\n"
"\346\254\242\350\277\216\345\217\215\351\246\210\351\227\256\351\242\230\345\210\260\351\202\256\347\256\261\357\274\2321142206684@qq.com\343\200\202\n"
"\346\226\260\347\211\210\346\234\254\346\233\264\346\226\260\345\217\257\344\273\245\351\200\232\350\277\207\344\270\252\344\272\272\347\275\221\345\235\200\357\274\232zekai123.cn\344\270\213\350\275\275\343\200\202\n"
"\346\212\200\346\234\257\345\244\247\344\275\254\346\272\220\347\240\201\344\272\244\346\265\201\345\217\257\344\273\245\347\275\221\347\253\231\351\246\226\351\241\265\347\225\231\350\250\200\343\200\202\n"
"\346\204\237\350\260\242\346\202\250\347\232\204\344\275\277\347\224\250\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about_developer: public Ui_about_developer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_DEVELOPER_H
