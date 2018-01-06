#include "event_thread.h"
#include "common.h"
#include "ui_iface.h"

using namespace std;

event_thread::event_thread(QObject *parent) {
    clickedfloor = FALSE;
    clickedcell = FALSE;
    //event_num=-1;
}

/*
 * Main event handling code, polling for event - this should be avoided, needs refinement.
 *
 * handle_cellevent() for event generated from cell and is priority so called first and then
 * handle_floorevent() is called. Good to separate these as distinct threads later.
 *
 */
void event_thread::run() {
    handle_cellevent();
    handle_floorevent();
}

void event_thread::handle_floorevent() {
    while(TRUE) {
        if(clickedfloor == TRUE) {
            cout<<"DEBUG:handle_event clicked = TRUE"<<endl;
            cp->handle_event();
        }
        else {
            //cout<<"DEBUG:handle_event clicked = FALSE"<<endl;
        }
        clickedfloor = FALSE;
        sleep(1);
    }
}

void event_thread::handle_cellevent() {
    while(TRUE) {
        if(clickedcell == TRUE) {
            cout<<"DEBUG:handle_event clicked = TRUE"<<endl;
            cp->handle_event();
        }
        else {
            //cout<<"DEBUG:handle_event clicked = FALSE"<<endl;
        }
        clickedcell = FALSE;
    }
}

void event_thread::set_event(int atfloor,int direction) {
    cout<<"DEBUG:event_thread::set_event("<<atfloor<<","<<direction<<")"<<endl;
    clickedfloor=TRUE;
}

void event_thread::set_event(int tofloor) {
    cout<<"DEBUG:event_thread::set_event("<<tofloor<<")"<<endl;
    clickedcell=TRUE;
}

event_thread::~event_thread() {

}
