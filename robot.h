#include <math.h>
const int LANDMARK_NUMBER = 5;

class robot 
{
private:
    double linear = 0.0;
    double omega = 0.0;
    double state[3];
    double distances[LANDMARK_NUMBER];
    double noisy_distances[LANDMARK_NUMBER];

   

public:
    robot(double, double, double);

    double* getDistances()
    { return this->distances; }

    void setLinear(double linear)
    { this->linear = linear; }

    void setOmega(double omega)
    { this->omega = omega; }

    void scan(int, double [][2]);

    void changeState(int, double);

    void updatePose(double, double, double);

    void publishPose();

};


/*
COMMON VARIABLES
x = complete state 
x_t = state at time t
robot pose: (x-coord, y-coord, yaw)
z_t1-t2: set of all measurements acquired from time t1 to time t2
u_t = control data ( change of world state in the time interval (t-1, t] )
u_t1-t2 = u_t1, u_(t1+1), u_(t1+2), ..., u_t2



*/
