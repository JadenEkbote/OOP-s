#include <iostream>
using namespace std;
class shape
{
protected:
    int hie, wid;

public:
    void setwidth(int w)
    {
        wid = w;
    }
    void setheight(int h)
    {
        hie = h;
    }
};
class rectangle : public shape
{
public:
    int area()
    {
        return (hie * wid);
    }
};
int main()
{
    int h, w;
    rectangle r;
    cout << "enter height" << endl;
    cin >> h;
    r.setheight(h);
    cout << "enter width" << endl;
    cin >> w;
    r.setwidth(w);
    cout << "area is : " << r.area() << endl;
}
// area and circle,triangle.