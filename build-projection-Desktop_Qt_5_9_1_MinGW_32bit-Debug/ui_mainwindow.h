/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QToolButton *Enter;
    QToolButton *reset;
    QTextEdit *inputNum;
    QTextEdit *result;
    QLabel *label_1;
    QLabel *label_2;
    QListView *listView;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1010, 629);
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \345\256\213\344\275\223 Std L"));
        font.setPointSize(26);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(249, 255, 253);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Enter = new QToolButton(centralWidget);
        Enter->setObjectName(QStringLiteral("Enter"));
        Enter->setGeometry(QRect(700, 510, 121, 51));
        Enter->setStyleSheet(QStringLiteral(""));
        reset = new QToolButton(centralWidget);
        reset->setObjectName(QStringLiteral("reset"));
        reset->setGeometry(QRect(840, 510, 121, 51));
        reset->setStyleSheet(QStringLiteral(""));
        inputNum = new QTextEdit(centralWidget);
        inputNum->setObjectName(QStringLiteral("inputNum"));
        inputNum->setGeometry(QRect(150, 30, 500, 150));
        inputNum->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 20pt \"Papyrus\";"));
        result = new QTextEdit(centralWidget);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(30, 310, 571, 211));
        result->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 20pt \"Papyrus\";"));
        label_1 = new QLabel(centralWidget);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(10, 20, 181, 51));
        label_1->setStyleSheet(QString::fromUtf8("\n"
"font: 25pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";\n"
"color: rgb(85, 255, 255);"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 180, 181, 51));
        label_2->setStyleSheet(QString::fromUtf8("\n"
"font: 25pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";\n"
"color: rgb(85, 255, 255);"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(700, 30, 291, 451));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(30, 260, 401, 41));
        textEdit->setReadOnly(true);
        MainWindow->setCentralWidget(centralWidget);
        Enter->raise();
        reset->raise();
        result->raise();
        label_1->raise();
        label_2->raise();
        inputNum->raise();
        listView->raise();
        textEdit->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1010, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        Enter->setText(QApplication::translate("MainWindow", "\347\241\256\350\256\244", Q_NULLPTR));
        reset->setText(QApplication::translate("MainWindow", "\351\207\215\347\275\256", Q_NULLPTR));
        inputNum->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Papyrus'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:9pt;\"><br /></p></body></html>", Q_NULLPTR));
        result->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Papyrus'; font-size:20pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:9pt;\"><br /></p></body></html>", Q_NULLPTR));
        label_1->setText(QApplication::translate("MainWindow", "\345\255\227\344\270\262\350\276\223\345\205\245", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\257\215\344\270\262\345\257\271\345\272\224", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
