//
#include <iostream>
using namespace std;
class parent
{
public:
    int x_p;

private:
    int pri;

protected:
    int pro = 22;
};
class child : public parent
{
public:
    int x_c;
    void test()
    {
        cout << "protected testing : " << pro << endl;
    }
};
int main()
{
    child obj;
    cout << "enter id for child" << endl;
    cin >> obj.x_c;
    cout << "enter id for Parent" << endl;
    cin >> obj.x_p;
    // obj.pro = 20;
    cout << "Child id is : " << obj.x_c << endl;
    cout << "Parent id is : " << obj.x_p << endl;
    obj.test();
    // cout << "Parent id (protected) is : " << obj.pro << endl;
}