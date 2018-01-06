#include "controller.h"

controller::controller(int numfloors,int numcells,int tsdelay ):numfloors(numfloors),numcells(numcells),delay(tsdelay)
{
       cellcount = 0;
}

/* Backend event handling code for event interface with GUI
*/
void controller::handle_event() {
    cout<<"DEBUG:In handle_event function"<<endl;
}

/* Initialize controller configuration variables - floor,
 * number of cells registered to that controller,
 * elevator cell time delay between each floor while traversing ...
*/
void controller::set(int numfloors,int numcells,int tsdelay) {
    this->numfloors = numfloors;
    this->numcells = numcells;
    this->delay = tsdelay;
    pcells = NULL;
    init();
}

/* Initialize controller variables including cells' state data */
void controller::init() {
    pcells = new ctrl_cell[numcells];
    for(int i=0;i<numcells;i++) {
        pcells[i].curr_flr=0;
        pcells[i].next_flr=0;
        if(NULL == pcells[i].cellp) {
            pcells[i].cellp = new cell();
        }
        pcells[i].enable_array = new bool[numfloors];
        pcells[i].active_flr = new bool[numfloors];

        for(int j=0;j<numfloors;j++) {
            pcells[i].enable_array[j] = TRUE;
            pcells[i].active_flr[j] = TRUE;
        }
    }
}

//    int updatecell(cell *pc,int floor,bool enable) {
/*
    int status = SUCCESS;
    for(i=0;i<numcells;i++)
    {
        if(pcells[i] == pc)
        {
            pcells[i]->enable_array[floor] = enable;
            break;
        }
    }
    return status;
*///  }
/*
    void run()
    {
  */      /*
         * Keep browsing the queue for pending requests.
         * A processing mechanism would be required for addressing requests :
         *
         * Get the floor num of event raised. If any cell is moving in the same direction as event raised floor
         * that cell will service the request, otherwise other cell would service the request.
         */
/*        for(i=0;i<numcells;i++)
        {
            delay = 0;
            n = ((pcells[i]->current_flr + 1) % numfloors);

            while(pcells[i]->active_flr[n] == FALSE) {
                delay = (delay + 5);
                if(n == 0) delay=0;
                if(n == pcells[i]->current_floor)
                {
                    delay = 0;
                    break;
                }
                n = ((n + 1) % numfloors);
            }
            if(n != pcells[i]->current_floor) {
                pcells[i]->next_flr= n;
                sleep(delay);
            }
        }
*/
    //}
