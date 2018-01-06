#include "mainwindowCell.h"
#include <ui_iface.h>

MainWindowCell::MainWindowCell(QWidget *parent) : QMainWindow(parent)
{
    memset(floor_current,0,3);
    floor_current[0] = '-';
    floor_current[1] = '-';
    setupCellUi();

    signalMapper = new QSignalMapper(this);

    connect(button101,&QPushButton::clicked,this,&MainWindowCell::button101_clicked);
    connect(button102,&QPushButton::clicked,this,&MainWindowCell::button102_clicked);
    connect(button103,&QPushButton::clicked,this,&MainWindowCell::button103_clicked);
    connect(button104,&QPushButton::clicked,this,&MainWindowCell::button104_clicked);

    signalMapper->setMapping(button101,1);
    signalMapper->setMapping(button102,2);
    signalMapper->setMapping(button103,3);
    signalMapper->setMapping(button104,4);
    connect(this,SIGNAL(my_signal(int)),evt1,SLOT(set_event(int)));
}

void MainWindowCell::button101_clicked()
{
    emit my_signal(1);
}
void MainWindowCell::button102_clicked()
{
    emit my_signal(2);
}
void MainWindowCell::button103_clicked()
{
    emit my_signal(3);      // Top floor
}
void MainWindowCell::button104_clicked()
{
    emit my_signal(0);      // Floor -1
}


MainWindowCell::~MainWindowCell()
{
    //delete ui;
}
