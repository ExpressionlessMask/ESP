#pragma once
#include <iostream>

class vec2D
{
protected:
    double x;
    double y;

public:

    vec2D();
    vec2D(double, double);

    void set_x(double);
    void set_y(double);
    
    double get_x() const
    { return x; };
    
    double get_y() const
    { return y; };

    vec2D operator+(const vec2D&) const;
    vec2D operator-(const vec2D&) const;
    vec2D operator=(const vec2D&);

    void toStr() const;
};