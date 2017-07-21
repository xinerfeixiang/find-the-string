/********************************************************************************
** Form generated from reading UI file 'rotatedia.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROTATEDIA_H
#define UI_ROTATEDIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_rotatedia
{
public:

    void setupUi(QDialog *rotatedia)
    {
        if (rotatedia->objectName().isEmpty())
            rotatedia->setObjectName(QStringLiteral("rotatedia"));
        rotatedia->resize(400, 300);

        retranslateUi(rotatedia);

        QMetaObject::connectSlotsByName(rotatedia);
    } // setupUi

    void retranslateUi(QDialog *rotatedia)
    {
        rotatedia->setWindowTitle(QApplication::translate("rotatedia", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class rotatedia: public Ui_rotatedia {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROTATEDIA_H
