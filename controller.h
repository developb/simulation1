#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "cell.h"
#include "common.h"

using namespace std;
class controller {
    int numfloors,numcells,cellcount,i,j,n,delay;
    struct ctrl {
        int curr_flr;       // current floor
        int next_flr;       // next floor enroute
        cell *pcell;        // cell pointer
        bool *enable_array; // indicates floors that are enabled for the cell
        bool *active_flr;   // floors that are routed now
    };
    typedef struct ctrl ctrl_cell;
    ctrl_cell *pcells;

    public:
    controller(int numfloors=0,int numcells=0,int tsdelay=0 ):numfloors(numfloors),numcells(numcells),delay(tsdelay) {
        cellcount = 0;
        i=j=n=0;
        delay=0;
    }
    //int addcell(cell*);
    void set(int,int,int);
    void handle_event();
};

#endif // CONTROLLER_H
