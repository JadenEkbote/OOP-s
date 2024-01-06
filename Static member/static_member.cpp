//
#include <iostream>
using namespace std;
class static_def
{
public:
    static int x;
    static int increment()
    {
        return (++x);
    }
};
int static_def::x = 1;
int main()
{
    static_def a;
    cout << a.increment() << endl;
    return 0;
}