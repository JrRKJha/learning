#include <iostream>
#include <conio.h>
using namespace std;

class loanCalc{
    float p,t,r;

    public:
    void getData(){
        cout<<"Please enter Principle Amount(eg: 1000): "<<endl;
        cin>>p;
        cout<<"Please enter Interest Rate(eg: 5): "<<endl;
        cin>>r;
        cout<<"Please enter Loan duration(In Years, eg:5): "<<endl;
        cin>>t;
    }

    int intAmt(){
        return (p*t*r)/100;
    }
};

int main(){
    loanCalc bankA,bankB;
    int intA,intB;

    cout<<endl<<endl<<"First Bank"<<endl<<endl;
    bankA.getData();
    intA=bankA.intAmt();

    cout<<endl<<endl<<"Second Bank"<<endl<<endl;
    bankB.getData();
    intB=bankB.intAmt();

    cout<<endl<<"Interest of Fist Bank = Rs "<<intA<<" and Interest of Second Bank = Rs "<<intB<<endl;

    if (intA>intB){
        cout<<endl<<"First Bank has better interest rates."<<endl;
    }
    else{
        cout<<endl<<"Second Bank has better interest rates."<<endl;
    }
    getch();
}