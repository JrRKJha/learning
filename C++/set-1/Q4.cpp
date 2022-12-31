/*
Define a class in C++ with following description:

Private Members
A data member Flight number of type integer
A data member Destination of type string
A data member Distance of type float
A data member Fuel of type float
A member function CALFUEL() to calculate the value of Fuel as per the
following criteria
Distance Fuel
<=1000 500
more than 1000 and <=2000 1100
more than 2000 2200
Public Members
A function FEEDINFO() to allow user to enter values for Flight Number,
Destination, Distance &amp; call function CALFUEL() to calculate the quantity of
Fuel
A function SHOWINFO() to allow user to view the content of all the data
members
*/

#include <iostream>
#include <string.h>
using namespace std;
class Flight
{
private:
    int FlightNumber;
    string Destination;
    float Distance, Fuel;
    float CALFUEL()
    {
        if (Distance <= 1000)
            Fuel = 500;
        else if (Distance > 1000 && Distance <= 2000)
            Fuel = 1100;
        else
            Fuel = 2200;
        return Fuel;
    }

public:
    void FEEDINFO()
    {
        cout << "Enter flight number: ";
        cin >> FlightNumber;
        cout << "Enter destination: ";
        cin >> Destination;
        cout << "Enter distance: ";
        cin >> Distance;
        CALFUEL();
    }
    void SHOWINFO()
    {
        cout << "Flight number: " << FlightNumber << endl;
        cout << "Destination: " << Destination << endl;
        cout << "Distance: " << Distance << endl;
        cout << "Fuel: " << Fuel << endl;
    }
};

int main()
{
    Flight f;
    f.FEEDINFO();
    f.SHOWINFO();
    return 0;
}
