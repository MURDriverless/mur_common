#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H
#include "ros.h"


class mur_state
{
private:
    // States that this node will track
    bool perceptionReady; 
    bool slamReady;
    bool localReady;
    bool lidarReady;
    bool camReady;
    

    
public:
    mur_state(/* args */);
    ~mur_state();
};

mur_state::mur_state(/* args */)
{
}

mur_state::~mur_state()
{
}

#endif