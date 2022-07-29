#include "about_developer.h"
#include "ui_about_developer.h"

about_developer::about_developer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::about_developer)
{
    ui->setupUi(this);
    this->setWindowTitle("关于开发者");
}

about_developer::~about_developer()
{
    delete ui;
}
