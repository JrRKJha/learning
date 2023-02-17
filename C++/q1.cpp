// Define a class with appropriate data members and member functions which opens an input and output file, checks each one for being open, and then reads name, age, salary of a person from the input file and stores the information in an object, increases the salary by a bonus of 10% and then writes the person object to the output file. It continues until the input stream is no longer needed.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Person
{
    string name;
    int age;
    float salary;

public:
    void readData(ifstream &fin)
    {
        fin >> name >> age >> salary;
    }

    void writeData(ofstream &fout)
    {
        fout << name << " " << age << " " << salary << endl;
    }

    void increaseSalary()
    {
        salary = salary + (salary * 0.1);
    }
};

int main()
{
    ifstream fin;
    ofstream fout;
    fin.open("input.txt");
    fout.open("output.txt");
    if (!fin)
    {
        cout << "Input file not found" << endl;
        return 0;
    }
    if (!fout)
    {
        cout << "Output file not found" << endl;
        return 0;
    }
    Person p;
    while (!fin.eof())
    {
        p.readData(fin);
        p.increaseSalary();
        p.writeData(fout);
    }
    fin.close();
    fout.close();
    return 0;
}