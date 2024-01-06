#include <iostream>
using namespace std;
inline int cube(int n)
{
    return n * n * n;
}
inline void sum(int n, int m)
{
    cout << "sum is : " << n + m << "\n";
}
inline int square(int n)
{
    return n * n;
}
int main()
{
    int n;
    cout << "Enter number - ";
    cin >> n;
    cout << "Cube is : " << cube(10) << endl;
    cout << "Square is : " << square(n) << endl;
    sum(10, 20);
    sum(30, 40);
    return 0;
}