#include "mainwindowCell.h"

#include <ui_iface.h>

MainWindowCell::MainWindowCell(QWidget *parent) : QMainWindow(parent)
{
    memset(floor_current,0,3);
    floor_current[0] = '-';
    floor_current[1] = '-';
    setupCellUi();
}
MainWindowCell::~MainWindowCell()
{
    //delete ui;
}
