// wap in cpp to display sum of two time in hours and minutes and seconds.

#include <iostream>
using namespace std;
class time
{

public:
    int h, m, s;
    void gettime()
    {
        cout << "Enter the time in hours,minutes and seconds" << endl;
        cin >> h >> m >> s;
    }
    void timedisplay()
    {
        cout << "The time is " << h << ":" << m << ":" << s << endl;
    }
};

int main()
{
    int sh, sm, ss;
    time t1, t2;

    cout << "\t--FIRST TIME--" << endl;
    t1.gettime();
    t1.timedisplay();

    cout << "\t--SECOND TIME--" << endl;
    t2.gettime();
    t2.timedisplay();

    cout << "\n--SUM OF TIME--" << endl;
    sh = t1.h + t2.h;
    sm = t1.m + t2.m;
    ss = t1.s + t2.s;

    if (ss >= 60)
    {
        ss = ss - 60;
        sm = sm + 1;
    }
    if (sm >= 60)
    {
        sm = sm - 60;
        sh = sh + 1;
    }

    // or we can use this
    // sm = sm + ss/60;
    // ss = ss%60;
    // sh = sh + sm/60;
    // sm = sm%60;

    cout << "The sum of time is " << sh << ":" << sm << ":" << ss << endl;

    system("PAUSE");
    return 0;
}
