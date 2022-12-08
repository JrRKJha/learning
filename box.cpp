#include <iostream>
using namespace std;
class Box
{
    int length, breath, height;

public:
    int volume()
    {
        return length * breath * height;
    }
    int surfacearea()
    {
        return 2 * (length * breath + breath * height + height * length);
    }
    void setvalue()
    {
        cout << "Enter length breath and height" << endl;
        cin >> length >> breath >> height;
    }
    void sum(Box a, Box b)
    {

        length = a.length + b.length;
        breath = a.breath + b.breath;
        height = a.height + b.height;
    }
};

int main()
{
    Box a, b, c;

    a.setvalue();
    cout << "The volume is " << a.volume() << endl;
    cout << "The surface area is " << a.surfacearea() << endl;
    b.setvalue();
    cout << "The volume is " << b.volume() << endl;
    cout << "The surface area is " << b.surfacearea() << endl;
    c.sum(a, b);
    cout << "Surface area is " << c.surfacearea() << endl;
    cout << "volume is " << c.volume() << endl;
    return 0;
}
