#ifndef MAINWINDOWCELL_H
#define MAINWINDOWCELL_H

#include <QMainWindow>
#include <QObject>
#include <QPushButton>
#include <QtWidgets/QApplication>
#include <QtCore/QSignalMapper>
#include <iostream>
//#include "ui_iface.h"
#include "common.h"


class MainWindowCell : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindowCell(QWidget *parent = nullptr);
    QSignalMapper* signalMapper;
    QWidget *centralWidgetCell;
    char floor_current[3];

    QPushButton *button101,*button102,*button103,*button104; // Elevator car buttons
    QPushButton *button201; // Display floor number
    ~MainWindowCell();

    void setupCellUi() {
        if(objectName().isEmpty())
                setObjectName(QStringLiteral("MainWindowCell"));
        resize(200, 200);
        centralWidgetCell = new QWidget(this);
        centralWidgetCell->setObjectName(QStringLiteral("centralWidgetCell"));
        button101 = new QPushButton(centralWidgetCell);
        button101->setObjectName(QStringLiteral("button101"));
        button101->setGeometry(QRect(20, 100, 50, 25));
        button101->setText(QApplication::translate("MainWindowCell", "0", 0));

        button102 = new QPushButton(centralWidgetCell);
        button102->setObjectName(QStringLiteral("button102"));
        button102->setGeometry(QRect(80, 100, 50, 25));
        button102->setText(QApplication::translate("MainWindowCell", "1", 0));

        button103 = new QPushButton(centralWidgetCell);
        button103->setObjectName(QStringLiteral("button103"));
        button103->setGeometry(QRect(20, 130, 50, 25));
        button103->setText(QApplication::translate("MainWindowCell", "2", 0));

        button104 = new QPushButton(centralWidgetCell);
        button104->setObjectName(QStringLiteral("button104"));
        button104->setGeometry(QRect(80, 130, 50, 25));
        button104->setText(QApplication::translate("MainWindowCell", "-1", 0));

        button201 = new QPushButton(centralWidgetCell);
        button201->setObjectName(QStringLiteral("button201"));
        button201->setGeometry(QRect(40, 20, 50, 50));
        button201->setText(QApplication::translate("MainWindowCell", floor_current, 0));

        setCentralWidget(centralWidgetCell);
        //QMetaObject::connectSlotsByName(MainWindowFloor);
    }

signals:

public slots:
};

#endif // MAINWINDOWCELL_H
