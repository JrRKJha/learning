// . Design your own manipulator to provide the following output specification for
// printing money value:
// • 10 columns width
// • The character '$' at the beginning Showing '+' sign.
// • Two digits precision
// • Filling of unused spaces with ' * '
// • Trailing zeros shown

#include <iostream>
#include <iomanip>
using namespace std;

class Money
{
    float value;

public:
    Money(float v = 0)
    {
        value = v;
    }

    friend ostream &operator<<(ostream &out, Money &m);
};

ostream &operator<<(ostream &out, Money &m)
{
    out << setw(10) << setfill('*') << showpos << fixed << setprecision(2) << "$" << m.value;
    return out;
}

int main()
{
    Money m1(123.456);
    cout << m1 << endl;
    return 0;
}
