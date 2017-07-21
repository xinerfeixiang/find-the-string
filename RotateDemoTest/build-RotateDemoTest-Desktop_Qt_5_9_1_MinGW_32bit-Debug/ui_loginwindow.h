/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_5;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_4;
    QTextEdit *textEdit;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName(QStringLiteral("LoginWindow"));
        LoginWindow->resize(600, 700);
        verticalLayout = new QVBoxLayout(LoginWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(LoginWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_2 = new QLabel(LoginWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 13pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        verticalLayout->addWidget(label_2);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        pushButton = new QPushButton(LoginWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        textEdit = new QTextEdit(LoginWindow);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QStringLiteral("font: 18pt \"18thCentury\";"));

        verticalLayout->addWidget(textEdit);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QDialog *LoginWindow)
    {
        LoginWindow->setWindowTitle(QApplication::translate("LoginWindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("LoginWindow", "\345\257\273\346\211\276\345\255\227\347\254\246\344\270\262", Q_NULLPTR));
        label_2->setText(QApplication::translate("LoginWindow", "\347\273\231\345\207\272\344\270\200\344\270\252\346\227\240\351\231\220\351\225\277\347\232\204\357\274\214\347\224\261\346\211\200\346\234\211\350\207\252\347\204\266\346\225\260\344\273\216\345\260\217\345\210\260\345\244\247\344\276\235\346\254\241\346\216\222\345\210\227\350\265\267\346\235\245\347\232\204\350\207\252\347\204\266\346\225\260\344\270\262S\357\274\210\347\247\260\344\270\272\346\257\215\344\270\262\357\274\211 \357\274\23212345678910111213141516\342\200\246\357\274\214\n"
"\344\273\273\347\273\231\344\270\200\344\270\252\346\225\260\345\255\227\344\270\262S1\357\274\210\347\247\260\344\270\272\345\255\220\344\270\262\357\274\211\357\274\214\347\274\226\347\250\213\346\261\202\345\207\272\345\256\203\347\254\254\344\270\200\346\254\241\345\207\272\347\216\260\347\232\204\344\275\215\347\275\256\343\200\202\n"
"", Q_NULLPTR));
        pushButton->setText(QApplication::translate("LoginWindow", "\350\257\267\345\234\250\344\270\213\346\226\271\350\276\223\345\205\245\347\233\256\346\240\207\345\255\227\344\270\262\345\220\216\357\274\214\347\202\271\345\207\273\346\255\244\345\244\204\347\241\256\350\256\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
