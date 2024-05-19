#include <random>

#include "robot.h"
#include "map_parser.cpp"
#include <random>

int LANDMARK_NUMBER = 5;
int MAP_SIZE = 50;


void genLandmark(int, double []);

int main(void)
{
    double landmarks[marks_num][2]; //[ [x,y], [x,y], ...]
    genLandmark(LANDMARK_NUMBER);
    
    robot R(10, 10, 0);
    R.publishPose();

    map_parser("map2_.pbm");

    return 0;
}

void genLandmark(int number, landmarks) { ///Check args
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(-10, 10);
    
    
}

//Robot class from here out
robot::robot(double pos_x, double pos_y, double theta) { //eh?
    this->state[0] = pos_x;
    this->state[1] = pos_y;
    this->state[2] = theta;
};


void robot::changeState(int i, double val) {

}

void robot::updatePose(double pos_x, double pos_y, double theta) {
    this->state[0] = pos_x;
    this->state[1] = pos_y;
    this->state[2] = theta;
}

void robot::publishPose() {
    cout <<"(" << state[0] << ", " << state[1] << ", " << state[2] << ")" << endl;
}
