#include <iostream>
using namespace std;
class operation
{
public:
    int a, b;
    inline int add()
    {
        return a + b;
    }
    inline int sub()
    {
        return a - b;
    }
    inline int mult()
    {
        return a * b;
    }
    inline int divison()
    {
        if (b != 0)
        {
            return (a / b);
        }
        else
        {
            cout << "Error : divison by 0 not possible" << endl;
        }
    }
};
int main()
{
    operation op;
    cout << "enter the numbers : ";
    cin >> op.a >> op.b;
    cout << "Addition : " << op.add() << endl;
    cout << "Subtratcion : " << op.sub() << endl;
    cout << "Multiplication : " << op.mult() << endl;
    cout << "Divison : " << op.divison() << endl;
}