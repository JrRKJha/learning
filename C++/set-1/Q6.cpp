/*
Define a class REPORT with the following specification:

Private members :
adno 4 digit admission number
name 20 characters
marks an array of 5 floating point values
average average marks obtained
GETAVG() a function to compute the average obtained in five subject

Public members:
READINFO() function to accept values for adno, name, marks. Invoke the function GETAVG()
DISPLAYINFO() function to display all data members of report on the
screen.
You should give function definitions.
*/

#include <iostream>
#include <string.h>
using namespace std;
class report
{
private:
    int adno;
    char name[20];
    float marks[5], average;
    float getavg()
    {
        average = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5;
        return average;
    }

public:
    void readinfo()
    {
        cout << "Enter admission number: ";
        cin >> adno;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks in 5 subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
        getavg();
    }
    void displayinfo()
    {
        cout << "Admission number: " << adno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks in 5 subjects: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Average marks: " << average << endl;
    }
};

int main()
{
    report r;
    r.readinfo();
    r.displayinfo();
    return 0;
}
