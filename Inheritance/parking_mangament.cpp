#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int i = 0, k = 0;
char str[100];
void str_p(char str[])
{
    for (int i = 0; i < 40; i++)
    {
        str[i] = '-';
    }
}
class parking_manage
{
public:
    int no_hours;
    float total_wage;
    string no_plate;
    char v_type; // C-Car; B-Bike.
    char p_r;
    string nam;
    string password;
    int days;
};
class date : public parking_manage
{
public:
    string d;
    date()
    {
        cout << "Enter the date" << endl;
        cin >> d;
    }
};
class hourly_calc : public parking_manage
{
public:
    void get_park_details()
    {
        cout << "Enter the Type (Car or Bike), Number plate, Number of hours the vehicle will be parked" << endl;
        cin >> v_type >> no_plate >> no_hours;
    }
    void calc_total()
    {
        if (v_type == 'C' || v_type == 'c')
        {
            total_wage = no_hours * 8.00;
        }
        if (v_type == 'B' || v_type == 'b')
        {
            total_wage = no_hours * 4.00;
        }
    }

public:
    void display_det()
    {
        if (v_type == 'c')
        {
            cout << "Car Number : " << no_plate << " hours parked : " << no_hours << " Total amount : " << total_wage << " Rupees" << endl;
        }
        if (v_type == 'b')
        {
            cout << "Bike Number : " << no_plate << " hours parked : " << no_hours << " Total amount : " << total_wage << " Rupees" << endl;
        }
    }
};
class premimum : public parking_manage
{
public:
    void get_premimum(void)
    {
        cout << "Creating account" << endl;
        cout << "Enter name and password" << endl;
        cin >> nam >> password;
    }
    void get_park_details_p()
    {
        cout << "Enter the Type (Car or Bike), Number plate" << endl;
        cin >> v_type >> no_plate;
    }
    void calc_total_p()
    {
        if (v_type == 'C' || v_type == 'c')
        {
            total_wage = days * 15.00;
        }
        if (v_type == 'B' || v_type == 'b')
        {
            total_wage = days * 10.00;
        }
    }
};
int main()
{

    hourly_calc a[10];
    premimum s[10];
    date ss;
    string numberplt;
    string na;
    while (1)
    {
        int ch;
        cout << "1.Vehicle enters 2.Do you want a membership for parking? 3.Vehicle leaves 4.Vehicle Spot Check 5.Already a Member? Login  6.Exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            if (i + 1 == 4)
            {
                cout << "parking slot Full" << endl;
                break;
            }
            else if (i + 1 == 3)
            {
                cout << "WARNING: Only ONE slot left" << endl;
            }
            a[i].get_park_details();
            a[i].calc_total();
            i++;
            for (int j = 0; j < 40; j++)
            {
                cout << "-";
            }
            cout << "\n";
            break;
        case 2:
            s[k].get_premimum();
            s[k].get_park_details_p();
            k++;
            for (int j = 0; j < 40; j++)
            {
                cout << str[j];
            }
            cout << "\n";
            break;
        case 3:
            // k = i;
            i--;
            cout << i << endl;
            a[i].display_det();
            for (int j = 0; j < 40; j++)
            {
                cout << str[j];
            }
            cout << "\n";
            break;
        case 4:
            cout << "Enter the number of the car" << endl;
            cin >> numberplt;
            for (int m = 0; m <= i; m++)
            {
                if (numberplt == a[m].no_plate)
                {
                    cout << "The vehicle (" << numberplt << "-Number) is parked at " << m << " Position" << endl;
                    break;
                }
            }
            for (int j = 0; j < 40; j++)
            {
                cout << str[j];
            }
            cout << "\n";
            break;
        case 5:
            cout << "Welcome. Enter your name" << endl;
            cin >> na;
            cout << k << endl;
            int l, j;
            for (int b = 0; b <= k; b++)
            {
                if (na == s[b].nam)
                {
                    l = k;
                    while (1)
                    {
                        int chp;
                        cout << "1.Total Bill 2.Car wash 3.Logout" << endl;
                        cin >> chp;
                        switch (chp)
                        {
                        case 1:
                            s[l].calc_total_p();
                            break;
                        case 3:
                            j = 1;
                            break;
                        default:
                            cout << "Error: Invalid option" << endl;
                            break;
                        }
                        if (j = 1)
                        {
                            break;
                        }
                    }
                    l = 1;
                    break;
                }
                else
                {
                    l = 0;
                }
            }
            if (l == 0)
            {
                cout << "Error: Account not Found!" << endl;
            }

            for (int j = 0; j < 40; j++)
            {
                cout << str[j];
            }
            cout << "\n";
            break;
        case 6:
            exit(0);
            for (int j = 0; j < 40; j++)
            {
                cout << str[j];
            }
            cout << "\n";
            break;
        default:
            cout << "Invalid syntax" << endl;
            for (int j = 0; j < 40; j++)
            {
                cout << str[j];
            }
            cout << "\n";
            break;
        }
    }
}

// user_base for regular parkers
// Monthly calclutaions after discount
// automatic assign parking after user login
//