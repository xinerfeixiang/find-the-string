#ifndef LOGINNETSETWINDOW_H
#define LOGINNETSETWINDOW_H

#include <QDialog>
#include "basewindow.h"

namespace Ui {
class LoginNetSetWindow;
}

class LoginNetSetWindow : public BaseWindow
{
    Q_OBJECT

public:
    explicit LoginNetSetWindow(QWidget *parent = 0);
    ~LoginNetSetWindow();

signals:
    void rotateWindow();
    void closeWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::LoginNetSetWindow *ui;
};

#endif // LOGINNETSETWINDOW_H
