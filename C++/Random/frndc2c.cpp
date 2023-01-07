// WAP to calc average using friend function using 2 args of obj of different classes.

#include <iostream>
using namespace std;

class avg;

class data
{
    int a;

public:
    void setdata(int a)
    {
        this->a = a;
    }

    void showdata()
    {
        cout << "a: " << a << endl;
    }
    friend float average(data, avg);
};

class avg
{
    int b;

public:
    void setdata(int b)
    {
        this->b = b;
    }
    void showdata()
    {

        cout << "b: " << b << endl;
    }
    friend float average(data, avg);
};

float average(data x, avg y)
{
    return (x.a + y.b) / 2.0;
}

int main()
{
    data x;
    x.setdata(15);
    x.showdata();

    avg y;
    y.setdata(25);
    y.showdata();

    cout << "Average: " << average(x, y) << endl;
    return 0;
}
