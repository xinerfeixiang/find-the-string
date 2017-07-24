#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include <QListWidget>
#include <QLabel>
#include <QSystemTrayIcon>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_bt_reset_clicked();

    void on_bt_solve_clicked();

    void on_t_input_textChanged();


    void on_hlist_itemClicked(QListWidgetItem *item);


protected:
    //加托盘图标
    QSystemTrayIcon* systemTray;
    QAction* minimumAct;
    QAction* maximumAct;
    QAction* restoreAct;
    QMenu* pContextMenu;
    QAction* quitAct;

    void TheIcon();

private:
    Ui::MainWindow *ui;

    void closeEvent(QCloseEvent *event);
};

#endif // MAINWINDOW_H
