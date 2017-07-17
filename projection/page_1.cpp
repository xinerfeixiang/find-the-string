#include "page_1.h"
#include "ui_page_1.h"

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




