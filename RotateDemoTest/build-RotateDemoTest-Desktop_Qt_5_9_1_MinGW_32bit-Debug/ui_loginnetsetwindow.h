/********************************************************************************
** Form generated from reading UI file 'loginnetsetwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINNETSETWINDOW_H
#define UI_LOGINNETSETWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginNetSetWindow
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_4;
    QTextEdit *textEdit_2;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_6;
    QTextEdit *textEdit;
    QSpacerItem *verticalSpacer_7;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *LoginNetSetWindow)
    {
        if (LoginNetSetWindow->objectName().isEmpty())
            LoginNetSetWindow->setObjectName(QStringLiteral("LoginNetSetWindow"));
        LoginNetSetWindow->resize(600, 700);
        verticalLayout = new QVBoxLayout(LoginNetSetWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(LoginNetSetWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 22pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        textEdit_2 = new QTextEdit(LoginNetSetWindow);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setStyleSheet(QStringLiteral("font: 18pt \"18thCentury\";"));

        verticalLayout->addWidget(textEdit_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        pushButton = new QPushButton(LoginNetSetWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        lineEdit = new QLineEdit(LoginNetSetWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setStyleSheet(QStringLiteral("font: 18pt \"18thCentury\";"));

        verticalLayout->addWidget(lineEdit);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        textEdit = new QTextEdit(LoginNetSetWindow);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QStringLiteral("font: 18pt \"18thCentury\";"));

        verticalLayout->addWidget(textEdit);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        pushButton_2 = new QPushButton(LoginNetSetWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(LoginNetSetWindow);

        QMetaObject::connectSlotsByName(LoginNetSetWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginNetSetWindow)
    {
        LoginNetSetWindow->setWindowTitle(QApplication::translate("LoginNetSetWindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("LoginNetSetWindow", "  \345\216\206\345\217\262\347\273\223\346\236\234\346\237\245\350\257\242", Q_NULLPTR));
        pushButton->setText(QApplication::translate("LoginNetSetWindow", "\344\270\213\344\270\200\347\273\204\346\225\260\346\215\256", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("LoginNetSetWindow", "\350\276\223\345\205\245\346\225\260\346\215\256\347\274\226\345\217\267\357\274\214\346\237\245\350\257\242\345\216\206\345\217\262\347\273\223\346\236\234", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginNetSetWindow: public Ui_LoginNetSetWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINNETSETWINDOW_H
