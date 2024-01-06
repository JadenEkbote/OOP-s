#include <iostream>
using namespace std;
class vehicle
{
public:
    vehicle()
    {
        cout << "This is a vehicle" << endl;
    }
};
class fourwheeler : public vehicle
{
public:
    fourwheeler()
    {
        cout << "This is a 4 wheeler" << endl;
    }
};
class car : public fourwheeler
{
public:
    car()
    {
        cout << "The car is made" << endl;
    }
};

int main()
{
    car o;
    return 0;
}
// area and circle,triangle.