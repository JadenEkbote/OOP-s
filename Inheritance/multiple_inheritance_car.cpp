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
class fourwheeler
{
public:
    fourwheeler()
    {
        cout << "This is a 4 wheeler" << endl;
    }
};
class car : public vehicle, public fourwheeler
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
