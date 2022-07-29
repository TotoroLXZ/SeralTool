#ifndef ABOUT_DEVELOPER_H
#define ABOUT_DEVELOPER_H

#include <QWidget>

namespace Ui {
class about_developer;
}

class about_developer : public QWidget
{
    Q_OBJECT

public:
    explicit about_developer(QWidget *parent = nullptr);
    ~about_developer();

private:
    Ui::about_developer *ui;
};

#endif // ABOUT_DEVELOPER_H
