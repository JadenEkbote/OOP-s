#include <iostream>
using namespace std;
class base
{
public:
    void print(void)
    {
        cout << "how are you doing?" << endl;
    }
};
class derived : public base
{
public:
    virtual void print(void)
    {
        cout << "helloo" << endl;
    }

} 
int main()
{
}
// area and circle,triangle.