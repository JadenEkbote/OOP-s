#include <iostream>
using namespace std;
class person
{
public:
    int phone_n;
    string adresss;
};
class employee : public person
{
public:
    string name_e;
    int e_no;
};
class manager : public employee
{
public:
    string designation, dept;
    float salary;
    void get_details()
    {
        cout << "Enter details of employee : emoployee number , name , address ,phone, designation, department name and salary\n";
        cin >> e_no >> name_e >> adresss >> phone_n >> designation >> dept >> salary;
    }
};

int main()
{
    int i, n, temp, max = 0;
    manager man[100];
    cout << "Enter number of managers\n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        man[i].get_details();
    }
    for (i = 0; i < n; i++)
    {
        if (man[i].salary > max)
        {
            max = man[i].salary;
            temp = i;
        }
    }
    cout << "Manager details with the highest salary\n";
    cout << man[temp].name_e << " " << man[temp].e_no << " " << man[temp].adresss << " " << man[temp].designation << " " << man[temp].dept << " " << man[temp].phone_n;
}