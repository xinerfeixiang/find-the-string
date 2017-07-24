#include "mainwindow.h"
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile qss_file(":/StringMatch.qss");
    qss_file.open(QFile::ReadOnly);
    qApp -> setStyleSheet(qss_file.readAll());
    qss_file.close();
    MainWindow w;
    w.show();

    return a.exec();
}
