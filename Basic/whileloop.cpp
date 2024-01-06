#include <iostream>
using namespace std;
int main()
{
    int a, b, i = 0, s = 1;
    cout << "enter the numbers\n";
    cin >> a >> b;
    while (i < b)
    {
        s = s * a;
        i++;
    }
    cout << "Answer(while loop) is : " << s << endl;
    s = i = 1;
    do
    {
        s = s * a;
        i++;
    } while (i <= b);
    cout << "Answer (do-while loop) is : " << s;
}