#include <iostream>
using namespace std;
class shape
{
protected:
    int rad;

public:
    void setrad(int r)
    {
        rad = r;
    }
};
class circle : public shape
{
public:
    float area()
    {
        return (3.142 * rad * rad);
    }
};
int main()
{
    int r;
    circle c;
    cout << "enter radius" << endl;
    cin >> r;
    c.setrad(r);
    cout << "area is : " << c.area() << endl;
}
// area and circle,triangle.