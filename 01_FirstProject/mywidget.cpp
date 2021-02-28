#include "mywidget.h"
#include "ui_mywidget.h"

// 类名,首字母大写
// 函数名,变量名 首字母小写

// 快速注释 ctrl + /
// 运行 ctrl + R
// 编译 ctrl + B
// 整行移动 ctrl + shift +↑ 或者 ↓
// F1帮助文档,再点击F1则全屏呼出
// 自动对齐 ctrl + I
// 同名的 .h文件与 .cpp切换 按F4

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    QPushButton *btn = new QPushButton();
    //btn->show(); //顶层显示
    btn->setParent(this);//依赖于MyWidget窗口中
    btn->setText("按钮1");

    QPushButton *btn2 = new QPushButton();
    btn2->move(50,50);
    //    按钮重置大小
    btn2->resize(50,50);
    btn2->setParent(this);//依赖于MyWidget窗口中
    btn2->setText("按钮2");

    //窗口大小重置
    resize(600,400);
    //设置窗口标题
    setWindowTitle("第一个窗口");
}

MyWidget::~MyWidget()
{
    delete ui;
}

