#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H
extern int testValue;
#include <QDialog>
#include "basewindow.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public BaseWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = 0);
    ~LoginWindow();

signals:
    void rotateWindow();
    void closeWindow();

private:
    void initMyTitle() ;
    void initWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::LoginWindow *ui;
};

#endif // LOGINWINDOW_H
