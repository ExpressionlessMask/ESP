#include "vec2D.h"

class robot 
{
private:
    vec2D velocity;
    vec2D acceleration;

public:
    void upd_acc(vec2D);
    void upd_vel();

    //void getScan();


};