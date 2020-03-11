#include "widget.h"
#include <QtWidgets>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    qDebug() << "Hello world";
}

Widget::~Widget()
{
}

