#include <iostream>
using namespace std;
int main()
{
    int a = 35, r = 25, s;
    s = (a < r) ? a : r;
    cout << s << endl;
    if ((a >= 35) && (r < 25))
    {
        cout << "Noice" << endl;
    }
}