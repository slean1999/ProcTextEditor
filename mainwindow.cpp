#include "mainwindow.h"
#include <QPushButton>
#include <QHBoxLayout>
#include <QDebug>
#include <QSignalMapper>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    QHBoxLayout* pHLayout = new QHBoxLayout(this);
    QPushButton* pButton1 = new QPushButton("quit",this);
    QPushButton* pButton2 = new QPushButton("ok",this);
    QSignalMapper* pMapper = new QSignalMapper(this);

    connect(pButton1,SIGNAL(clicked()),pMapper,SLOT(map()));
    pMapper->setMapping(pButton1, 0);
    connect(pButton2,SIGNAL(clicked()),pMapper,SLOT(map()));
    pMapper->setMapping(pButton2, 1);
    pHLayout->addWidget(pButton1);
    pHLayout->addWidget(pButton2);
    connect(pMapper,SIGNAL(mapped(int)),SLOT(OnClicked(int)));
    QWidget* pWidget = new QWidget(this);

    pWidget->setLayout(pHLayout);
    setCentralWidget(pWidget);
}

MainWindow::~MainWindow()
{

}

void MainWindow::OnClicked(int i)
{
    QString s;
    s.setNum(i);
    qDebug()<<"clicked"<<s;
}
