#include "loginnetsetwindow.h"
#include "ui_loginnetsetwindow.h"

LoginNetSetWindow::LoginNetSetWindow(QWidget *parent) :
BaseWindow(parent),
    ui(new Ui::LoginNetSetWindow)
{
    ui->setupUi(this);
    ui -> pushButton ->setStyleSheet("QPushButton{color: #fff; background-color: #5bc0de; border-color: #46b8da; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}"
                                  "QPushButton:hover{color: #fff; background-color: #31b0d5; border-color: #269abc; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}"
                                  "QPushButton:pressed{color: #fff; background-color: #269abc; border-color: #1b6d85; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}");

    ui -> pushButton_2 ->setStyleSheet("QPushButton{color: #fff; background-color: #5bc0de; border-color: #46b8da; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}"
                                  "QPushButton:hover{color: #fff; background-color: #31b0d5; border-color: #269abc; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}"
                                  "QPushButton:pressed{color: #fff; background-color: #269abc; border-color: #1b6d85; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}");

    ui -> textEdit ->setReadOnly(true);
    ui -> textEdit_2 ->setReadOnly(true);
    ui -> textEdit ->setFocusPolicy(Qt ::NoFocus);
    ui -> textEdit_2 -> setFocusPolicy(Qt ::NoFocus);
}


LoginNetSetWindow::~LoginNetSetWindow()
{
    delete ui;
}

void LoginNetSetWindow::on_pushButton_clicked()
{
	rotateWindow();
}
