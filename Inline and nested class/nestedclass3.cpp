// definning a nested class as public member of inner class
#include <iostream>
using namespace std;
class A
{
public:
    class B
    {
    public:
        void print()
        {
            cout << "nested class is public" << endl;
        }
    };
    B n;

public:
    void show()
    {
        n.print();
    }
};
int main()
{
    A enc;
    enc.show();
    return 0;
}