/********************************************************************************
** Form generated from reading UI file 'page_1.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_1_H
#define UI_PAGE_1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_page_1
{
public:
    QWidget *centralwidget;
    QTextEdit *History_in;
    QTextEdit *History_out;
    QLabel *HLab_1;
    QLabel *HLab_2;
    QToolButton *close;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *page_1)
    {
        if (page_1->objectName().isEmpty())
            page_1->setObjectName(QStringLiteral("page_1"));
        page_1->resize(800, 600);
        page_1->setStyleSheet(QStringLiteral("background-color: rgb(249, 255, 253);"));
        centralwidget = new QWidget(page_1);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        History_in = new QTextEdit(centralwidget);
        History_in->setObjectName(QStringLiteral("History_in"));
        History_in->setGeometry(QRect(20, 100, 300, 450));
        History_in->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        History_out = new QTextEdit(centralwidget);
        History_out->setObjectName(QStringLiteral("History_out"));
        History_out->setGeometry(QRect(480, 100, 300, 450));
        History_out->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        HLab_1 = new QLabel(centralwidget);
        HLab_1->setObjectName(QStringLiteral("HLab_1"));
        HLab_1->setGeometry(QRect(50, 30, 201, 51));
        HLab_1->setStyleSheet(QString::fromUtf8("\n"
"font: 25pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";\n"
"color: rgb(85, 255, 255);"));
        HLab_2 = new QLabel(centralwidget);
        HLab_2->setObjectName(QStringLiteral("HLab_2"));
        HLab_2->setGeometry(QRect(510, 30, 201, 51));
        HLab_2->setStyleSheet(QString::fromUtf8("\n"
"font: 25pt \"\346\226\271\346\255\243\345\247\232\344\275\223\";\n"
"color: rgb(85, 255, 255);"));
        close = new QToolButton(centralwidget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(340, 490, 121, 51));
        page_1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(page_1);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        page_1->setMenuBar(menubar);
        statusbar = new QStatusBar(page_1);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        page_1->setStatusBar(statusbar);

        retranslateUi(page_1);

        QMetaObject::connectSlotsByName(page_1);
    } // setupUi

    void retranslateUi(QMainWindow *page_1)
    {
        page_1->setWindowTitle(QApplication::translate("page_1", "MainWindow", Q_NULLPTR));
        HLab_1->setText(QApplication::translate("page_1", "\345\216\206\345\217\262\350\276\223\345\205\245\345\255\227\344\270\262", Q_NULLPTR));
        HLab_2->setText(QApplication::translate("page_1", "\345\216\206\345\217\262\350\276\223\345\207\272\346\257\215\344\270\262", Q_NULLPTR));
        close->setText(QApplication::translate("page_1", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class page_1: public Ui_page_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_1_H
