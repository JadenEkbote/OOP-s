#include <iostream>
using namespace std;
class product
{
public:
    int id;
    float price;
    string name;
};
class discount : public product
{
public:
    float dis, dis_price;
    void get_details()
    {
        cout << "Enter details of product : product number , name , price and discount\n";
        cin >> id >> name >> price >> dis;
        dis = dis / 100;
        dis = 1 - dis;
        dis_price = price * dis;
    }
};
int main()
{
    int i, n, tot = 0;
    discount d[100];
    cout << "Enter number of products\n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        d[i].get_details();
    }
    cout << "product details are\n";
    for (i = 0; i < n; i++)
    {
        tot = tot + d[i].dis_price;
        cout << "Product id : " << d[i].id << " Product name : " << d[i].name << "  Product Original price : " << d[i].price << " Discounted Product price : " << d[i].dis_price << endl;
    }
    cout << "Total Price : " << tot << endl;
}