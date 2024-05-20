#include <random>

#include "robot.h"
#include "map_parser.cpp"

int MAP_SIZE = 50;

void genLandmark(double [][2]);
void demonstrate(double [][2]);
void demonstrate(double []);

int main(void)
{
    double landmarks[LANDMARK_NUMBER][2]; //[ [x,y], [x,y], ...]
    genLandmark(landmarks);
    demonstrate(landmarks);

    cout << "\n--------------------------\n";
    
    robot R(10, 10, 0);
    R.publishPose();

    cout << "\n--------------------------\n";

    R.scan(LANDMARK_NUMBER, landmarks);
    demonstrate(R.getDistances());


    //map_parser("map2_.pbm");



    return 0;
}

void genLandmark(double landmarks[][2]) { ///Check args
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(0, MAP_SIZE);

    for (int i = 0; i < LANDMARK_NUMBER; i++) {
        landmarks[i][0]= distribution(generator);
        landmarks[i][1]= distribution(generator);
    }
}

void demonstrate(double array [][2]) {
    for (int i = 0; i < LANDMARK_NUMBER; i++) {
        std::cout << i << ": (" << array[i][0] << ", " << array[i][1] << ")" << endl;
    }

}
void demonstrate(double array []) {
    for (int i = 0; i < LANDMARK_NUMBER; i++) {
        std::cout << i << ": (" << array[i] << ")" << endl;

    }
}

//Robot class from here out
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
    cout <<"(" << state[0] << ", " << state[1] << ", " << state[2] << ")" << endl;
}
