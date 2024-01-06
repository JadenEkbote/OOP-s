//
#include <iostream>
using namespace std;
class static_def
{
public:
    static int x;
};
int static_def::x = 1;
int main()
{
    static_def a;
    cout << "bello" << endl;
    return 0;
}