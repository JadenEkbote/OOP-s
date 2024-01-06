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
class car : public vehicle
{
};
class bus : public vehicle
{
};

int main()
{
    car o;
    bus f;
    return 0;
}
