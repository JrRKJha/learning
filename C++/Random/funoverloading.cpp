// wap in cpp to demonstrate function overloading with default argument and marking all overloaded functions as inline
#include <iostream>
using namespace std;
inline int add(int a, int b = 0, int c = 0)
{
    return a + b + c;
}
int main()
{
    cout << add(10, 20, 30) << endl;
    cout << add(10, 20) << endl;
    cout << add(10) << endl;
    return 0;
}
