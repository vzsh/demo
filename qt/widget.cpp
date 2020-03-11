#include "widget.h"
#include <QtWidgets>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    qDebug() << "hello world";
}

Widget::~Widget()
{
}

