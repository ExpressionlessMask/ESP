
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