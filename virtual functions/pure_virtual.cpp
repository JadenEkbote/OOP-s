#include <iostream>
using namespace std;
class shape
{
public:
    virtual float calc_area() = 0;
};
class square : public shape
{
    float a;

public:
    square(float l)
    {
        a = l;
    }
    float calc_area()
    {
        return a * a;
    }
};
class circle : public shape
{
    float r;

public:
    circle(float x)
    {
        r = x;
    }
    float calc_area()
    {
        return 3.142 * r * r;
    }
};
class recatanlge : public shape
{
    float a, b;

public:
    recatanlge(float x, float y)
    {
        a = x;
        b = y;
    }
    float calc_area()
    {
        return a * b;
    }
};
int main()
{
    shape *s;
    square sq(3.4);
    circle c(2.14);
    recatanlge r(2.3, 5.7);
    s = &sq;
    cout << "Area of Square " << s->calc_area() << endl;
    s = &c;
    cout << "Area of circle " << s->calc_area() << endl;
    s = &r;
    cout << "Area of rectangle " << s->calc_area() << endl;
}
// area and circle,triangle.