#include "rotatewidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /*
        说明：窗口翻转效果
    */

	RotateWidget w;
    w.show();

    return a.exec();
}
