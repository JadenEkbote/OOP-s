#include <iostream>
using namespace std;
class employee
{
public:
    string name_e;
    int e_no;
};
class fulltime : public employee
{
public:
    int d_r, n_d;
    float salary;
    void get_details()
    {
        cout << "Enter details of fulltime employee : emoployee number , name , daily rate, no of.days\n";
        cin >> e_no >> name_e >> d_r >> n_d;
        salary = d_r * n_d;
    }
};
class partime : public employee
{
public:
    int h_r, h_w;
    float salary;
    void get_details()
    {
        cout << "Enter details of part time employee : emoployee number , name , hourly rate, no of.hours\n";
        cin >> e_no >> name_e >> h_r >> h_w;
        salary = h_r * h_w;
    }
};

int main()
{
    int i, key, n, temp, stat;
    fulltime f[100];
    partime p[100];
    while (1)
    {
        cout << "1.enter employees 2.Get details of Employees 3.search employee 4.exit" << endl;
        cin >> key;
        stat = 0;
        switch (key)
        {

        case 1:
            cout << "enter number full time and part time employees\n";
            cin >> n;
            for (i = 0; i < n; i++)
            {
                f[i].get_details();
                p[i].get_details();
            }
            break;
        case 2:
            cout << "Deatils of full time employees\n";
            for (i = 0; i < n; i++)
            {
                cout << "name : " << f[i].name_e << " employee code : " << f[i].e_no << " salary : " << f[i].salary << endl;
            }
            cout << "Deatils of part time employees\n";
            for (i = 0; i < n; i++)
            {
                cout << "name : " << p[i].name_e << " employee code : " << p[i].e_no << " salary : " << p[i].salary << endl;
            }
            break;
        case 3:
            cout << "Enter employee id\n";
            cin >> temp;
            for (i = 0; i < n; i++)
            {
                if (temp == f[i].e_no)
                {
                    cout << "name : " << f[i].name_e << " employee code : " << f[i].e_no << " salary : " << f[i].salary << endl;
                    stat = 1;
                }
            }
            for (i = 0; i < n; i++)
            {
                if (temp == p[i].e_no)
                {
                    cout << "name : " << p[i].name_e << " employee code : " << p[i].e_no << " salary : " << p[i].salary << endl;
                    stat = 1;
                }
            }
            if (stat == 0)
            {
                cout << "Employee details not found\n";
            }
            break;

        case 4:
            exit(0);
            break;
        default:
            cout << "Inavlid token\n";
            break;
        }
    }
}