// wap to demonstrate unary operator overloading
#include <iostream>
using namespace std;

class unary
{
    int a;

public:
    void getdata()
    {
        cout << "Enter a number: ";
        cin >> a;
    }
    void operator-()
    {
        a = -a;
    }
    void display()
    {
        cout << "The number is: " << a;
    }
};

int main()
{
    unary u;
    u.getdata();
    -u;
    u.display();
    return 0;
}