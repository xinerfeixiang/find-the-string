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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_5;
    QTabWidget *tabWidget;
    QWidget *tab1;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *bt_reset;
    QLabel *label;
    QPushButton *bt_solve;
    QTextEdit *t_output;
    QTextEdit *t_input;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpinBox *s_width;
    QComboBox *comboBox;
    QLabel *status_1;
    QWidget *tab2;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_3;
    QTextEdit *hout;
    QLabel *label_4;
    QLabel *label_5;
    QTextEdit *hin;
    QLabel *label_3;
    QListWidget *hlist;
    QLabel *status_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 900);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_5 = new QGridLayout(centralWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab1 = new QWidget();
        tab1->setObjectName(QStringLiteral("tab1"));
        gridLayout_2 = new QGridLayout(tab1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        label_2 = new QLabel(tab1);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setStyleSheet(QStringLiteral("font: 20pt \"18thCentury\";"));

        gridLayout->addWidget(label_2, 2, 4, 1, 1);

        bt_reset = new QPushButton(tab1);
        bt_reset->setObjectName(QStringLiteral("bt_reset"));

        gridLayout->addWidget(bt_reset, 2, 7, 1, 1);

        label = new QLabel(tab1);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("font: 20pt \"18thCentury\";"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        bt_solve = new QPushButton(tab1);
        bt_solve->setObjectName(QStringLiteral("bt_solve"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(bt_solve->sizePolicy().hasHeightForWidth());
        bt_solve->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(bt_solve, 2, 6, 1, 1);

        t_output = new QTextEdit(tab1);
        t_output->setObjectName(QStringLiteral("t_output"));
        t_output->setStyleSheet(QString::fromUtf8("font: 33pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        t_output->setReadOnly(true);

        gridLayout->addWidget(t_output, 4, 0, 1, 8);

        t_input = new QTextEdit(tab1);
        t_input->setObjectName(QStringLiteral("t_input"));
        t_input->setStyleSheet(QString::fromUtf8("font: 33pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(t_input, 0, 0, 1, 8);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        s_width = new QSpinBox(tab1);
        s_width->setObjectName(QStringLiteral("s_width"));
        s_width->setStyleSheet(QStringLiteral("font: 22pt \"18thCentury\";"));
        s_width->setMaximum(1000);
        s_width->setValue(10);

        gridLayout->addWidget(s_width, 2, 5, 1, 1);

        comboBox = new QComboBox(tab1);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setStyleSheet(QString::fromUtf8("font: 16pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout->addWidget(comboBox, 2, 2, 2, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        status_1 = new QLabel(tab1);
        status_1->setObjectName(QStringLiteral("status_1"));
        status_1->setStyleSheet(QStringLiteral("font: 20pt \"18thCentury\";"));

        gridLayout_2->addWidget(status_1, 1, 0, 1, 1);

        tabWidget->addTab(tab1, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QStringLiteral("tab2"));
        gridLayout_4 = new QGridLayout(tab2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        hout = new QTextEdit(tab2);
        hout->setObjectName(QStringLiteral("hout"));
        hout->setStyleSheet(QString::fromUtf8("font: 33pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        hout->setReadOnly(true);

        gridLayout_3->addWidget(hout, 4, 2, 1, 1);

        label_4 = new QLabel(tab2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font: 20pt \"18thCentury\";"));

        gridLayout_3->addWidget(label_4, 3, 2, 1, 1);

        label_5 = new QLabel(tab2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("font: 20pt \"18thCentury\";"));

        gridLayout_3->addWidget(label_5, 0, 0, 1, 1);

        hin = new QTextEdit(tab2);
        hin->setObjectName(QStringLiteral("hin"));
        hin->setStyleSheet(QString::fromUtf8("font: 33pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        hin->setReadOnly(true);

        gridLayout_3->addWidget(hin, 2, 1, 1, 2);

        label_3 = new QLabel(tab2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 20pt \"18thCentury\";"));

        gridLayout_3->addWidget(label_3, 0, 1, 1, 2);

        hlist = new QListWidget(tab2);
        hlist->setObjectName(QStringLiteral("hlist"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(hlist->sizePolicy().hasHeightForWidth());
        hlist->setSizePolicy(sizePolicy3);
        hlist->setStyleSheet(QString::fromUtf8("font: 33pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        gridLayout_3->addWidget(hlist, 1, 0, 4, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        status_2 = new QLabel(tab2);
        status_2->setObjectName(QStringLiteral("status_2"));
        status_2->setStyleSheet(QStringLiteral("font: 20pt \"18thCentury\";"));

        gridLayout_4->addWidget(status_2, 1, 0, 1, 1);

        tabWidget->addTab(tab2, QString());

        gridLayout_5->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "String Matcher", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Prefix / Suffix Width", Q_NULLPTR));
        bt_reset->setText(QApplication::translate("MainWindow", "   Reset   ", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Result:", Q_NULLPTR));
        bt_solve->setText(QApplication::translate("MainWindow", "   Match   ", Q_NULLPTR));
        t_input->setPlaceholderText(QApplication::translate("MainWindow", "Input...", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\346\255\243\345\270\270", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\344\274\230\351\233\205\346\232\227\346\251\231", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\270\205\346\226\260\347\231\275\350\223\235", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\345\205\270\351\233\205\347\202\253\351\273\221", Q_NULLPTR)
        );
        status_1->setText(QApplication::translate("MainWindow", "Ready.", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab1), QApplication::translate("MainWindow", "Mathcer", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Output", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "List", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Input", Q_NULLPTR));
        status_2->setText(QApplication::translate("MainWindow", "No record yet.", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab2), QApplication::translate("MainWindow", "History", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
