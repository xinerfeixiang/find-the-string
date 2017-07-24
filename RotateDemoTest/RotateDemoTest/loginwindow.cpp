#include "loginwindow.h"
#include "ui_loginwindow.h"
#include <QPainter>
#include <QMovie>
#include <QHBoxLayout>
#include <QCursor>
#include <QFile>
#include <QtGui>
#include"qtextstream.h"
#include"Qtextstream"
int testValue=0;

LoginWindow::LoginWindow(QWidget *parent) :
BaseWindow(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    initMyTitle();
    this->loadStyleSheet(":/Resources/LoginWindow/LoginWindow.css");
    ui -> pushButton ->setStyleSheet("QPushButton{color: #fff; background-color: #5bc0de; border-color: #46b8da; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}"
                                  "QPushButton:hover{color: #fff; background-color: #31b0d5; border-color: #269abc; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}"
                                  "QPushButton:pressed{color: #fff; background-color: #269abc; border-color: #1b6d85; padding: 6px 12px; margin-bottom: 0; font-size: 30px; font-weight: normal; line-height: 1.42857143; text-align: center; white-space: nowrap; vertical-align: middle; background-image: none; border: 1px solid transparent; border-radius: 10px;}");

//设定输入页的简介文本框为只读
//    ui -> textEdit_2 -> setReadOnly(true);
//    ui -> textEdit_2 -> setCursor(Qt :: DisplayRole);setFocusPolicy(Qt::NoFocus);
//    ui->textEdit_2 -> setFocusPolicy( Qt :: NoFocus);
    ui->label_2->setGeometry(QRect(328, 240, 329, 27*4));
    ui->label_2->setWordWrap(true);
    ui->label_2->setAlignment(Qt::AlignJustify);
    ui->label_2->adjustSize();

    //规定输入框只能输入数字
    QRegExp regx("[0-9] + $");
    QValidator *validator = new QRegExpValidator(regx, this);
    ui->textEdit->setVisible(validator);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::initMyTitle()
{
    // 因为这里有控件层叠了，所以要注意控件raise()方法的调用顺序;
    m_titleBar->move(0, 0);
    m_titleBar->raise();
    m_titleBar->setBackgroundColor(0, 0, 0 , true);
    m_titleBar->setButtonType(MIN_BUTTON);
    m_titleBar->setTitleWidth(this->width());
}


void LoginWindow::on_pushButton_clicked()
{
    rotateWindow();

/*    qDebug()<<testValue;
    testValue=1;
    qDebug()<<testValrue;

    QString strText = ui -> textEdit -> toPlainText();
    QTextStream ts(&strText);
            while(!ts.atEnd());
    {
        QDebug() << ts.readLine();
    }*/
//    QString pro;
//    pro = textLine
}

