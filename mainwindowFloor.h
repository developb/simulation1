#ifndef MAINWINDOWFLOOR_H
#define MAINWINDOWFLOOR_H

#include <QMainWindow>
#include <QPushButton>
#include <QtWidgets/QApplication>
#include <QtCore/QSignalMapper>
#include <iostream>
//#include "ui_iface.h"
#include "common.h"

using namespace std;

class MainWindowFloor : public QMainWindow
{
    Q_OBJECT
    QSignalMapper* signalMapper;
public:
    QWidget *centralWidgetFloor;
    QPushButton *button1,*button2,*button3,*button4,*button5,*button6; // Each floor buttons
    QPushButton *button001, *button002; // Floor display

    explicit MainWindowFloor(QWidget *parent = 0);
    void setupFloorUi() {
        if(objectName().isEmpty())
                setObjectName(QStringLiteral("MainWindowFloor"));
        resize(200, 300);
        centralWidgetFloor = new QWidget(this);
        centralWidgetFloor->setObjectName(QStringLiteral("centralWidget"));
        button1 = new QPushButton(centralWidgetFloor);
        button1->setObjectName(QStringLiteral("button1"));
        button1->setGeometry(QRect(20, 20, 50, 25));
        button1->setText(QApplication::translate("MainWindowFloor", "DOWN", 0));
        button2 = new QPushButton(centralWidgetFloor);
        button2->setObjectName(QStringLiteral("button2"));
        button2->setGeometry(QRect(20, 60, 50, 25));
        button2->setText(QApplication::translate("MainWindowFloor", "UP", 0));
        button3 = new QPushButton(centralWidgetFloor);
        button3->setObjectName(QStringLiteral("button3"));
        button3->setGeometry(QRect(20, 85, 50, 25));
        button3->setText(QApplication::translate("MainWindowFloor", "DOWN", 0));
        button4 = new QPushButton(centralWidgetFloor);
        button4->setObjectName(QStringLiteral("button4"));
        button4->setGeometry(QRect(20, 120, 50, 25));
        button4->setText(QApplication::translate("MainWindowFloor", "UP", 0));
        button5 = new QPushButton(centralWidgetFloor);
        button5->setObjectName(QStringLiteral("button5"));
        button5->setGeometry(QRect(20, 145, 50, 25));
        button5->setText(QApplication::translate("MainWindowFloor", "DOWN", 0));
        button6 = new QPushButton(centralWidgetFloor);
        button6->setObjectName(QStringLiteral("button6"));
        button6->setGeometry(QRect(20, 180, 50, 25));
        button6->setText(QApplication::translate("MainWindowFloor", "UP", 0));

        //button1->show();
        setCentralWidget(centralWidgetFloor);
        QMetaObject::connectSlotsByName(this);
    }

    ~MainWindowFloor();
signals:
    void my_signal(int ,int );

public slots:
    void button_clicked();
    void button1_clicked();
    void button2_clicked();
    void button3_clicked();
    void button4_clicked();
    void button5_clicked();
    void button6_clicked();

//private:
    //Ui::MainWindow *ui;
    //MainWindow *ui;
};

#endif // MAINWINDOWFLOOR_H
