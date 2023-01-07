#include <iostream>
using namespace std;
class KCC
{
    int a;

public:
    KCC()
    {
    }
    KCC(int a)
    {
        this->a = a;
    }
    KCC returnObj(KCC x)
    {
        this->a = x.a;
        return *this;
    }
    void showdata()
    {
        cout << a << endl;
    }
};

int main()
{
    int Z = 10;
    KCC obj1(Z);
    KCC obj2;
    obj2.returnObj(obj1);
    obj2.showdata();
    obj1.showdata();
    return 0;
}