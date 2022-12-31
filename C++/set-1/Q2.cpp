/*
Define a class batsman with the following specifications :
Private members : bcode 4 digits code number
bname 20 characters
innings,
notout,
runs integer type
batavg it is calculated according to the formula – batavg = runs / (innings - notout)
calcavg() Function to compute batavg

Public members:
readdata()                      Function to accept value from bcode, name, innings, notout and invoke the function                                       calcavg()
displaydata()                   Function to display the data members on the screen.
*/

#include <iostream>
#include <string.h>
using namespace std;
class batsman
{
private:
    int bcode, innings, notout, runs;
    char bname[20];
    float batavg;
    float calcavg()
    {
        batavg = runs / (innings - notout);
        return batavg;
    }

public:
    void readdata()
    {
        cout << "Enter batsman code: ";
        cin >> bcode;
        cout << "Enter batsman name: ";
        cin >> bname;
        cout << "Enter innings: ";
        cin >> innings;
        cout << "Enter notout: ";
        cin >> notout;
        cout << "Enter runs: ";
        cin >> runs;
        calcavg();
    }
    void displaydata()
    {
        cout << "Batsman code: " << bcode << endl;
        cout << "Batsman name: " << bname << endl;
        cout << "Innings: " << innings << endl;
        cout << "Notout: " << notout << endl;
        cout << "Runs: " << runs << endl;
        cout << "Batting average: " << batavg << endl;
    }
};

int main()
{
    batsman b;
    b.readdata();
    b.displaydata();
    return 0;
}