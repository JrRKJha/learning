// v=p(1+r)^n
// p=1000,2000,3000,4000,5000...
// r=0.10,0.11,0.12,0.13,0.14...
// n=1,2,3,4,5...

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double p = 0, r = 0, v;
    int n, num;
    cout << "Please enter the number of Terms you want: ";
    cin >> num;

    for (n = 1; n <= num; n++)
    {
        p = 1000 + p;
        r = 0.10 + r;
        v = p * pow((1 + r), n);
        cout << n << "\t" << v << endl;
    }
}