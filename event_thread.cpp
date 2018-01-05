#include "event_thread.h"
#include "common.h"

using namespace std;

event_thread::event_thread(QObject *parent) {
    clicked = FALSE;
    //event_num=-1;
}

void event_thread::run() {
    handle_event();
}

void event_thread::handle_event() {
    while(TRUE) {
        if(clicked == TRUE)
            cout<<"DEBUG:handle_event clicked = TRUE"<<endl;
        else
            cout<<"DEBUG:handle_event clicked = FALSE"<<endl;
        clicked = FALSE;
        sleep(1);
    }
}

void event_thread::set_event(int i,int j) {
    clicked = TRUE;
    cout<<"DEBUG:event_thread::set_event("<<i<<","<<j<<")"<<endl;
}

event_thread::~event_thread() {

}
