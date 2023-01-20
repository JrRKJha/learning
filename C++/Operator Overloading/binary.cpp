// WAP to demonstrate binary operator overloading with comments
#include <iostream>
using namespace std;

class binary
{
    int a, b;

public:
    void getdata()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    void operator+(binary x)
    {
        a = a + x.a;
        b = b + x.b;
    }
    // void addNumbers(binary x)
    // {
    //     a = a + x.a;
    //     b = b + x.b;
    // }
    void display()
    {
        cout << "The sum is: " << a << " + " << b << "i";
    }
};

int main()
{
    binary b1, b2;
    b1.getdata();
    b2.getdata();
    b1 + b2;
    // b1.addNumbers(b2);
    b1.display();
    return 0;
}