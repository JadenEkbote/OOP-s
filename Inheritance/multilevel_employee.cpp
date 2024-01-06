#include <iostream>
using namespace std;
class organization
{
public:
    string c_name;
    organization()
    {
        cout << "Enter Organization" << endl;
        cin >> c_name;
    }
};
class employee : public organization
{
public:
    string name_e;
    int salary;
    void set_n(string n)
    {
        name_e = n;
    }
    void set_s(int d)
    {
        salary = d;
    }
};
class disp : public employee
{
public:
    void get_details()
    {
        cout << endl;
        cout << "Employee details are " << endl;
        cout << "Organization : " << c_name << endl;
        cout << "Employee name : " << name_e << endl;
        cout << "Salary of employee : " << salary << endl;
    }
};

int main()
{
    string n;
    int d;
    disp f;
    cout << "Enter Name of the employee at " << f.c_name << endl;
    cin >> n;
    f.set_n(n);
    cout << "Enter Salary of " << f.name_e << " at " << f.c_name << endl;
    cin >> d;
    f.set_s(d);
    f.get_details();
}