
class robot 
{
private:
    double linear = 0.0;
    double omega = 0.0;
    double state[3];
    static const int TIMESTEP = 1000;

public:
    robot(double, double, double);

    void setLinear(double linear)
    { this->linear = linear; }

    void setOmega(double omega)
    { this->omega = omega; }

    void changeState(int, double);

    void updatePose(double, double, double);
    //void getScan();
    void publishPose();

};

//static const double TIMESTEP = 0.001;

/*
COMMON 
x = complete state 
x_t = state at time t
robot pose: (x-coord, y-coord, yaw)
z_t1-t2: set of all measurements acquired from time t1 to time t2
u_t = control data ( change of world state in the time interval (t-1, t] )
u_t1-t2 = u_t1, u_(t1+1), u_(t1+2), ..., u_t2



*/
