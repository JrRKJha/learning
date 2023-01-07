// WAP to calc average using friend function using 2 args of obj of same class avg.

#include <iostream>
using namespace std;

class avg
{
    int a, b;

public:
    void setdata(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void showdata()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }
    friend float average(avg);
};

float average(avg x)
{
    return (x.a + x.b) / 2.0;
}

int main()
{
    avg x;
    x.setdata(15, 20);
    x.showdata();

    cout << "Average: " << average(x) << endl;
    return 0;
}
