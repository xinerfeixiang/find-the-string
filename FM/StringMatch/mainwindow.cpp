#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>
#include <sstream>
#include <QMessageBox>
#include <QElapsedTimer>
#include <QMainWindow>
#include <QMenu>
#include <map>
#include <QMouseEvent>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowIcon(QIcon(":/tubiao.ico"));//设置图标
    TheIcon();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_bt_reset_clicked()
{
    ui->t_input->setText("");
    ui->t_output->setText("");
    ui->status_1->setText("Ready.");
}

using namespace std;
vector<QString> history;
int f(string str, stringstream &sout, int width);
void MainWindow::on_bt_solve_clicked()
{
    string str = ui->t_input->toPlainText().toStdString();
    if(str.empty()) {
        QMessageBox::information(this, "Infomation", "Empty input: please enter a valid string.");
        return;
    }
    for(int i = 0; i < str.size(); i++) if(str[i] < '0' || str[i] > '9') {
        QMessageBox::information(this, "Infomation", "Invalid string: only numbers are allowed.");
        return;
    }
    if(str.length() > 600) if(QMessageBox::question(this, "Query",
             "Large input: it may takes very long time to process, continue?",
              QMessageBox::Yes|QMessageBox::No) == QMessageBox::No) return;

    QElapsedTimer timer;
    timer.start();

    stringstream sout;
    int r = f(str, sout, ui->s_width->value());

    string left, right, res;
    sout >> right >> left;
    reverse(left.begin(), left.end());
    if(r == 0) left += "1";
    res = left + "[.......input.......]" + right;

    history.push_back(QString::fromStdString(res));

    ui->t_output->setText(QString::fromStdString(res));
    ui->status_1->setText("String matched. Elapsed time: " + QString::number(timer.elapsed()) + "ms.");
    ui->hlist->addItem(ui->t_input->toPlainText());
    ui->status_2->setText(QString::number(ui->hlist->count()) + " record(s).");
}

void MainWindow::on_t_input_textChanged()
{
    auto l = ui->t_input->toPlainText().length();
    if(l == 0) ui->status_1->setText("Ready.");
    else ui->status_1->setText("Input: " + QString::number(l) + "character(s).");

}


void MainWindow::on_hlist_itemClicked(QListWidgetItem *item)
{
    int i = ui->hlist->row(ui->hlist->selectedItems().at(0));
    ui->hout->setText(history[i]);
    ui->hin->setText(ui->hlist->selectedItems().at(0)->text());
}

void MainWindow::TheIcon()
{
    QIcon icon(":/tubiao.ico");
    systemTray = new QSystemTrayIcon(this);
    systemTray -> setIcon(icon);
    systemTray -> setToolTip("Test Radio Buttons");
    minimumAct = new QAction("Minimum Window",this);
    //hide() is not showMinimized()
    connect(minimumAct,SIGNAL(triggered()),this,SLOT(hide()));
    maximumAct = new QAction("Maximum Window",this);
    connect(maximumAct,SIGNAL(triggered()),this,SLOT(showMaximized()));
    restoreAct = new QAction("Restore Window",this);
    connect(restoreAct,SIGNAL(triggered()),this,SLOT(showNormal()));
    quitAct = new QAction("Quit Application",this);
    connect(quitAct,SIGNAL(triggered()),qApp,SLOT(quit()));

    pContextMenu = new QMenu(this);
    pContextMenu -> addAction(minimumAct);
    pContextMenu -> addAction(maximumAct);
    pContextMenu -> addAction(restoreAct);
    pContextMenu -> addSeparator();
    pContextMenu -> addAction(quitAct);
    systemTray->setContextMenu(pContextMenu);
    systemTray->show();
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if(systemTray -> isVisible())
    {
        hide();
        systemTray ->showMessage("Tips","The program is now running in background!");
        event->ignore();
    }
}

class ChangeSkin
{
public:
    static void setStyle(const QString &style){
        QFile qss_file(style);
        qss_file.open(QFile::ReadOnly);
        qApp -> setStyleSheet(qss_file.readAll());
        qss_file.close();
    }
};

void MainWindow::on_comboBox_activated(const QString &arg1)
{
    if( arg1 == "优雅暗橙"){ChangeSkin::setStyle(":/StringMatch.qss");}
    if( arg1 == "清新白蓝"){ChangeSkin::setStyle(":/StringMatch1.qss");}
    if( arg1 == "典雅炫黑"){ChangeSkin::setStyle(":/StringMatch2.qss");}
    if( arg1 == "正常"){ChangeSkin::setStyle(":/StringMatch3.qss");}
}
