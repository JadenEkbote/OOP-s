// static data member in a c++ is a member defined wtih each object defined in the class
// if static data member is declared outside a class , static member is defiined elements of the static variable class
// a static data member in c++ decalred in a class can be used outside as a scope resolution operator

// problem : static data member outside class. (calculate Square)

#include <iostream>
using namespace std;
class square
{
public:
    int num;
    square(double m)
    {
        num = m;
    }
};
void square_cal(square n)
{
    int res = n.num * n.num;
    cout << "Square of " << n.num << " is : " << res << endl;
}
int main()
{
    square n1(20);
    square_cal(n1);
    return 0;
}