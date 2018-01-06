#include <QApplication>
#include <QThread>
#include <pthread.h>

#include "mainwindowFloor.h"
#include "mainwindowCell.h"
#include "common.h"
#include "event_thread.h"
#include "controller.h"

using namespace std;
event_thread *evt1;
controller* cp;

void *control_thread(void* ptr);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    evt1 = new event_thread();
    evt1->start();

    MainWindowFloor wfloor;
    MainWindowCell wcell;
    pthread_t t1;
    pthread_create(&t1,NULL,control_thread,NULL);
    wfloor.show();
    wcell.show();
    pthread_join(t1,NULL);
    return a.exec();

}

void *control_thread(void *ptr) {

    cout<<"Hello, in control_thread() function"<<endl;
    cp = new controller();
    cp->set(4,1,2); // 4 floors, 1 cell, 2 seconds delay


}

