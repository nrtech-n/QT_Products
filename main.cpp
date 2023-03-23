#include "mainwindow.h"
#include <QApplication>
#include <qlabel.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QLabel *lable=new QLabel (&w);
    lable->setText("Hello World  Welcome to QT");
    lable->setAlignment(Qt::AlignCenter);
    w.show();
    return a.exec();
}
