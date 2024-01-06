// nested class to illustrate working of nested class using scope resolution opreator
#include <iostream>
using namespace std;
class outerclass
{
private:
    class inner_private
    {
    public:
        void test();
        void print()
        {
            cout << "nested class is private" << endl;
        }
    };

public:
    class inner_public
    {
    public:
        void print()
        {
            cout << "nested class is public" << endl;
        }
    };
    inner_public n1;
    inner_private n2;
    void show();
};
void outerclass::inner_private::test()
{
    cout << "test is works" << endl;
}
void outerclass::show()
{
    n1.print();
    n2.print();
    n2.test();
}
int main()
{
    outerclass enc;
    enc.show();
    return 0;
}

// inner class can ascesss static member decalred in outside/outer class
// you are allowed to create objects of inner classs in outer class
