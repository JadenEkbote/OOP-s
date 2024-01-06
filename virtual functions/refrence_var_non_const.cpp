#include <iostream>
using namespace std;

// int main()
// {
//     int a = 10;
//     int &value = a;
//     cout << value << endl;
// first type non constant secon type on bottom aliasing}

int main()
{
    int a = 8;
    int &b = a;
    cout << a << " variable" << endl;
    cout << b << " Reference variable" << endl;
}