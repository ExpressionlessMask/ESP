#include "vec2D.cpp"
#include "robot.cpp"


int main(void)
{
    vec2D vec1;
    vec2D vec2(1,2);
    (vec1 + vec2).toStr();
    vec2D vec3 = (vec1 + vec2);
    vec3.toStr();


    return 0;
}