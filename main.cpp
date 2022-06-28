#include "connect.h"
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connect c;
    c.setWindowFlag(Qt::FramelessWindowHint);
    c.setAttribute(Qt::WA_TranslucentBackground);
    c.show();
    return a.exec();
}
