#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>
#include <QDebug>


class MyPushButton : public QWidget
{
    Q_OBJECT
public:
    explicit MyPushButton(QWidget *parent = nullptr);
    ~MyPushButton();
signals:

};

#endif // MYPUSHBUTTON_H
