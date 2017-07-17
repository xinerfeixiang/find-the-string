#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void MainWindow_data(int);

private slots:
    void on_Enter_clicked();


    void on_reset_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
