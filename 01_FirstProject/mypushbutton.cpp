#include "mypushbutton.h"


MyPushButton::MyPushButton(QWidget *parent) : QWidget(parent)
{
    qDebug() << "我的按钮类构造调用";
}

//想重载,先声明
MyPushButton::~MyPushButton()
{
    qDebug() << "我的按钮类析构调用";
}

