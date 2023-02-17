// wap in cpp to create a new file and write data into it

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("newfile.txt");
    if (!fout)
    {
        cout << "File not found" << endl;
        return 0;
    }
    fout << "Hello World" << endl;
    fout.close();
    return 0;
}