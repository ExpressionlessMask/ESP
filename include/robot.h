#ifndef ROBOT_H
#define ROBOT_H

#include <vector>
#include <string>
#include <iostream>
#include <math.h>
#include <exception>
#include "world.h"

class Robot
{
public:
    // Initialize robot in a random position in the world
    Robot(World world);
    // Set robot's states
    void set_states(double new_x, double new_y, double new_orient);
    // Set robots state transition noise. Added manually since it's only a simulation of a real system
    void set_noise(double forward_noise, double turn_noise, double sensor_noise);
    // Sense the environment with sensors
    std::vector<double> sense(bool noise = true);
    // Move the robot
    void move(double turn, double forward);
    // get sensor noise
    double get_sensor_noise();
    // get x
    double get_x();
    // get y
    double get_y();
    // Get pose readings
    std::string get_pose();
    // Get sensor readings
    std::string get_sensor_readings();

private:
    // robot states
    double x__;
    double y__;
    double orientation__;
    // noise
    static double forward_noise__;
    static double turn_noise__;
    static double sense_noise__;
    //size of the wolrd
    World world__;

};

#endif /* ROBOT_H */