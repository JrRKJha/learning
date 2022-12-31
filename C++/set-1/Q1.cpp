/*1. Define a class student with the following specification
Private members of class student
//admno                        integer
sname                        20 character
eng. math, science           float
total                        float
ctotal()                     a function to calculate eng + math + science with float return type.
Public member function of class student
Takedata()                   Function to accept values for admno, sname, eng, science and invoke ctotal() to calculate total.
Showdata()                   Function to display all the data members on the screen
*/
#include <iostream>
#include <string.h>
using namespace std;
class student
{
private:
    int admno;
    char sname[20];
    float eng, math, science, total;
    float ctotal()
    {
        total = eng + math + science;
        return total;
    }

public:
    void takedata()
    {
        cout << "Enter admission number: ";
        cin >> admno;
        cout << "Enter name: ";
        cin >> sname;
        cout << "Enter marks in English: ";
        cin >> eng;
        cout << "Enter marks in Math: ";
        cin >> math;
        cout << "Enter marks in Science: ";
        cin >> science;
        }
    void showdata()
    {
        cout << "Admission number: " << admno << endl;
        cout << "Name: " << sname << endl;
        cout << "Marks in English: " << eng << endl;
        cout << "Marks in Math: " << math << endl;
        cout << "Marks in Science: " << science << endl;
        cout << "Total marks: " << ctotal() << endl;
    }
};

int main()
{
    student s;
    s.takedata();
    s.showdata();
    return 0;
}
