#include "controller.h"

void controller::handle_event() {
    cout<<"In handle_event function"<<endl;
}

void controller::set(int numfloors,int numcells,int tsdelay) {
    this->numfloors = numfloors;
    this->numcells = numcells;
    this->delay = tsdelay;
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
