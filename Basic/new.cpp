#include <iostream>
using namespace std;
int main()
{
    int a, b, s = 1;
    cout << "enter the numbers\n";
    cin >> a >> b;
    for (int i = 0; i < b; i++)
    {
        s = s * a;
    }
    cout << "Answer is : " << s;
}