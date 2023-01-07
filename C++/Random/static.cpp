// wap to identify the sequence of value set to the class using static keyword and also find the total number of times value was set.

#include <iostream>
using namespace std;

class sequence
{
    char objName;
    int sequencesNo;
    static int count;

public:
    void setsequence(char objName)
    {
        this->objName = objName;
        sequencesNo = ++count; // count = count + 1; and then assign to sequencesNo
    }
    void showsequence()
    {
        cout << "Object Name: " << objName << endl;
        cout << "Sequence No: " << sequencesNo << endl;
    }
    static void showcount()
    {
        cout << "Total number of times value was set: " << count << endl;
    }
};

int sequence::count = 0;

int main()
{
    sequence s1, s2, s3;
    s3.setsequence('C');
    s1.setsequence('A');
    s2.setsequence('B');
    // s3.setsequence('C');
    s1.showsequence();
    s2.showsequence();
    s3.showsequence();
    sequence::showcount();
    return 0;
}
