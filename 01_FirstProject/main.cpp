#include "mywidget.h"

#include <QApplication> //包含一个应用程序类的文件

int main(int argc, char *argv[])
{
    //在应用程序对象,Qt中,应用程序对象有且只有一个
    QApplication a(argc, argv);
    //窗口对象,MyWidget  父类-> QWidget
    MyWidget w;
    //窗口对象,默认不显示,调用show方法显示窗口
    w.show();

    //让应用程序对象进入消息循环
    return a.exec();
}
