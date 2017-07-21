#include "rotatedia.h"
#include "ui_rotatedia.h"

rotatedia::rotatedia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rotatedia)
{
    ui->setupUi(this);

	m_layout = new QBoxLayout(QBoxLayout::TopToBottom, this);
	m_layout->setContentsMargins(0, 0, 0, 0);
	m_RoateWin = new RotateWidget();
	m_layout->addWidget(m_RoateWin);
	this->setLayout(m_layout);
}

rotatedia::~rotatedia()
{
    delete ui;
}
