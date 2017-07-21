        #ifndef ROTATEDIA_H
    #define ROTATEDIA_H

    #include <QDialog>
    #include "rotatewidget.h"
    #include <QBoxLayout>

    namespace Ui {
    class rotatedia;
    }

    class rotatedia : public QDialog
    {
        Q_OBJECT

    public:
        explicit rotatedia(QWidget *parent = 0);
        ~rotatedia();

    private:
        Ui::rotatedia *ui;
        QBoxLayout *m_layout;
        RotateWidget *m_RoateWin;
    };

    #endif // ROTATEDIA_H
