#include "vec2D.h"

vec2D::vec2D() {
    this->x = 0.0;
    this->y = 0.0;
};

vec2D::vec2D(double x, double y) {
    this->x = x;
    this->y = y;
};

void vec2D::set_x(double x) {
    this->x = x;
};

void vec2D::set_y(double y) {
    this->y = y;
};

vec2D vec2D::operator+(const vec2D& vec2) const{
    vec2D vec3;
    vec3.set_x(this->x + vec2.x);
    vec3.set_y(this->y + vec2.y);
    return vec3;
};

void vec2D::toStr() const{
    std::cout << "(" << this->x << "," << this->y << ")" << std::endl; 
}