#ifndef ROTATEWIDGET_H
#define ROTATEWIDGET_H

#include <QStackedWidget>
#include <QPainter>
#include <QDebug>

class LoginWindow;
class LoginNetSetWindow;
class RotateWidget : public QStackedWidget
{
    Q_OBJECT

public:
    RotateWidget(QWidget *parent = NULL);
    ~RotateWidget();

private:
    // 初始化旋转的窗口;
    void initRotateWindow();
    // 绘制旋转效果;
    void paintEvent(QPaintEvent* event);

private slots:
    // 开始旋转窗口;
    void onRotateWindow();
    // 窗口旋转结束;
    void onRotateFinished();

private:
    // 当前窗口是否正在旋转;
    bool m_isRoratingWindow;
    // 登录界面;
    LoginWindow* m_loginWindow;
    // 网络设置界面;
    LoginNetSetWindow* m_loginNetSetWindow;
    int m_nextPageIndex;
};

#endif // ROTATEWIDGET_H
