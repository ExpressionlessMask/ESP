

class vec2D
{
protected:
    float x;
    float y;

public:

    void set_x(float);
    void set_y(float);
    
    float get_x()
    { return x; };
    
    float get_y()
    { return y; };

    vec2D operator+(const vec2D&);
    vec2D operator-(const vec2D&);
    vec2D operator=(const vec2D&);

};