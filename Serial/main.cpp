#include "serial_controler.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Serial_Controler w;
    w.show();
    return a.exec();
}
