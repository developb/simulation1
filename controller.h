#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "cell.h"
#include "common.h"

using namespace std;
class controller {

public:
    explicit controller(int numfloors=0,int numcells=0,int tsdelay=0 );
    //int addcell(cell*);
    void set(int,int,int);
    void handle_event();
private:
    int numfloors,numcells,delay;
    int cellcount;
    struct ctrl {
        int curr_flr;       // current floor
        int next_flr;       // next floor enroute
        cell *cellp;        // cell pointer
        bool *enable_array; // indicates floors that are enabled for the cell
        bool *active_flr;   // floors that are routed now
    };
    typedef struct ctrl ctrl_cell;
    ctrl_cell *pcells;
    void init();
};

//controller *cp;

#endif // CONTROLLER_H
