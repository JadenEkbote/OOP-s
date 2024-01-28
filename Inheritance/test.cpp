#include <iostream>

// Call-by-Value function
void incrementByValue(int x)
{
    x++;
    std::cout << "Inside incrementByValue: " << x << std::endl;
}

// Call-by-Reference function
void incrementByReference(int &x)
{
    x++;
    std::cout << "Inside incrementByReference: " << x << std::endl;
}

int main()
{
    int num = 5;

    // Using Call-by-Value
    std::cout << "Before incrementByValue: " << num << std::endl;
    incrementByValue(num);
    std::cout << "After incrementByValue: " << num << std::endl;

    // Using Call-by-Reference
    std::cout << "Before incrementByReference: " << num << std::endl;
    incrementByReference(num);
    std::cout << "After incrementByReference: " << num << std::endl;

    return 0;
}
