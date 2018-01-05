#include "mainwindowFloor.h"
//#include "ui_mainwindow.h"

#include <ui_iface.h>

MainWindowFloor::MainWindowFloor(QWidget *parent) : QMainWindow(parent)
{
    setupFloorUi();
    //setupCellUi();
    signalMapper = new QSignalMapper(this);

    connect(button1,&QPushButton::clicked,this,&MainWindowFloor::button1_clicked);
    connect(button2,&QPushButton::clicked,this,&MainWindowFloor::button2_clicked);
    connect(button3,&QPushButton::clicked,this,&MainWindowFloor::button3_clicked);
    connect(button4,&QPushButton::clicked,this,&MainWindowFloor::button4_clicked);
    connect(button5,&QPushButton::clicked,this,&MainWindowFloor::button5_clicked);
    connect(button6,&QPushButton::clicked,this,&MainWindowFloor::button6_clicked);

    signalMapper->setMapping(button1,1);
    signalMapper->setMapping(button2,2);
    signalMapper->setMapping(button3,3);
    signalMapper->setMapping(button4,4);
    signalMapper->setMapping(button5,5);
    signalMapper->setMapping(button6,6);
    connect(this,SIGNAL(my_signal(int,int)),evt1,SLOT(set_event(int,int)));
}

void MainWindowFloor::button_clicked()
{
    cout<<"slot function button1_clicked()"<<endl;
}
void MainWindowFloor::button1_clicked()
{    
    emit my_signal(2,0);
}
void MainWindowFloor::button2_clicked()
{
    emit my_signal(1,1);
}
void MainWindowFloor::button3_clicked()
{
    emit my_signal(1,0);
}
void MainWindowFloor::button4_clicked()
{
    emit my_signal(0,1);
}
void MainWindowFloor::button5_clicked()
{
    emit my_signal(0,0);
}
void MainWindowFloor::button6_clicked()
{
    emit my_signal(-1,1);
}

MainWindowFloor::~MainWindowFloor()
{
    //delete ui;
}
