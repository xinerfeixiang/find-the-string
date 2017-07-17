#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "page_1.h"
#include "ui_page_1.h"

//MainWindow *pMainWindow;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags()&Qt::WindowMaximizeButtonHint&Qt::WindowMinimizeButtonHint);

    ui->Enter->setStyleSheet("QToolButton{color: #fff; background-color: #5bc0de; border-color: #46b8da; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}"
                             "QToolButton:hover{color: #fff; background-color: #31b0d5; border-color: #269abc; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}"
                             "QToolButton:pressed{color: #fff; background-color: #269abc; border-color: #1b6d85; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}");

    ui->reset->setStyleSheet("QToolButton{color: #fff; background-color: #5bc0de; border-color: #46b8da; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}"
                             "QToolButton:hover{color: #fff; background-color: #31b0d5; border-color: #269abc; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}"
                             "QToolButton:pressed{color: #fff; background-color: #269abc; border-color: #1b6d85; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}");


}
MainWindow::~MainWindow()
{
    delete ui;
}





page_1::page_1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::page_1)
{
    ui->setupUi(this);

    ui->close->setStyleSheet("QToolButton{color: #fff; background-color: #5bc0de; border-color: #46b8da; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}"
                             "QToolButton:hover{color: #fff; background-color: #31b0d5; border-color: #269abc; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}"
                             "QToolButton:pressed{color: #fff; background-color: #269abc; border-color: #1b6d85; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}");

}

page_1::~page_1()
{
    delete ui;
}






void MainWindow::on_Enter_clicked()
{
//    MainWindow *pMainWindow = new MainWindow();
//    pMainWindow ->show();
//   connect(btn,SIGNAL(clicked(bool),this,SLOT(on_Enter_clicked()));

    page_1* p1 = new page_1();
    p1->show();
}



void page_1::on_close_clicked()
{
    this->close();
}

void MainWindow::on_reset_clicked()
{
   ui->inputNum->clear();
   ui->result->clear();
}
