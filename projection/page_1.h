#ifndef PAGE_1_H
#define PAGE_1_H

#include "MainWindow.h"
#include <QMainWindow>

namespace Ui {
class page_1;
}

class page_1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit page_1(QWidget *parent = 0);
    ~page_1();

private:
    Ui::page_1 *ui;
    MainWindow *MainWindow1;
private slots:
    void dataprocess(int value);
    void on_pushButton_clicked();
    void on_close_clicked();
};

#endif // PAGE_1_H
