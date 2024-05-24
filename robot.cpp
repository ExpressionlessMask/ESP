#include <iostream>

#include "robot.h"

robot::robot(double pos_x, double pos_y, double theta) { //eh?
    this->state[0] = pos_x;
    this->state[1] = pos_y;
    this->state[2] = theta;
};

void robot::scan(int points, double landmarks[][2]) {
    for (int i = 0; i < points; i++) {
        distances[i] = sqrt( pow( (landmarks[i][0] - state[0]), 2) + 
                                        pow( (landmarks[i][1] - state[1]), 2));
    }
}


void robot::changeState(int i, double val) {

}

void robot::updatePose(double pos_x, double pos_y, double theta) {
    this->state[0] = pos_x;
    this->state[1] = pos_y;
    this->state[2] = theta;
}

void robot::publishPose() {
    std::cout <<"(" << state[0] << ", " << state[1] << ", " << state[2] << ")" << std::endl;
}
