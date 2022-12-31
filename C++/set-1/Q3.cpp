/*
Define a class TEST in C++ with following description:

Private Members
TestCode of type integer
Description of type string
NoCandidate of type integer
CenterReqd (number of centers required) of type integer
A member function CALCNTR() to calculate and return the number of centers as
(NoCandidates/100+1)
Public Members
- A function SCHEDULE() to allow user to enter values for TestCode,
Description, NoCandidate &amp; call function CALCNTR() to calculate the number of
Centres
- A function DISPTEST() to allow user to view the content of all the data
members
*/

#include <iostream>
#include <string.h>
using namespace std;
class TEST
{
private:
    int TestCode, NoCandidate, CenterReqd;
    string Description;
    int CALCNTR()
    {
        CenterReqd = NoCandidate / 100 + 1;
        return CenterReqd;
    }

public:
    void SCHEDULE()
    {
        cout << "Enter test code: ";
        cin >> TestCode;
        cout << "Enter description: ";
        cin >> Description;
        cout << "Enter number of candidates: ";
        cin >> NoCandidate;
        CALCNTR();
    }
    void DISPTEST()
    {
        cout << "Test code: " << TestCode << endl;
        cout << "Description: " << Description << endl;
        cout << "Number of candidates: " << NoCandidate << endl;
        cout << "Number of centers required: " << CenterReqd << endl;
    }
};

int main()
{
    TEST t;
    t.SCHEDULE();
    t.DISPTEST();
    return 0;
}
