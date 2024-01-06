#include <iostream>
using namespace std;
class animal
{
public:
    string col, eat;
    int legs;
};
class dog : public animal
{
public:
    void get_c(string x)
    {

        col = x;
    }
    void get_l(int t)
    {

        legs = t;
    }
    void get_e(string f)
    {
        eat = f;
    }
    string n;
    void get_n(string n)
    {
        cin >> n;
    }
};
int main()
{
    int h, w;
    dog d;
    d.get_c("Brown");
    d.get_l(4);
    d.get_e("Herbivorus");
    d.get_n("PABHYA");
    cout << d.col << d.n << d.eat << d.legs << endl;
}
// area and circle,triangle.