// static data member in a c++ is a member defined wtih each object defined in the class
// if static data member is declared outside a class , static member is defiined elements of the static variable class
// a static data member in c++ decalred in a class can be used outside as a scope resolution operator

// problem : static data member outside class. (calculate average marks)

#include <iostream>
using namespace std;
class student
{
public:
    double marks;
    student(double m)
    {
        marks = m;
    }
};
void calavrerage(student s1, student s2)
{
    double avg = (s1.marks + s2.marks) / 2;
    cout << "Average marks : " << avg << endl;
}
int main()
{
    student std1(88.0);
    student std2(20.8);
    calavrerage(std1, std2);
    return 0;
}