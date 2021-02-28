#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include "mypushbutton.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MyWidget; }
QT_END_NAMESPACE

class MyWidget : public QWidget
{
    Q_OBJECT //Q_OBJECT 宏,允许类中使用  信号和槽  机制

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

private:
    Ui::MyWidget *ui;
};
#endif // MYWIDGET_H
