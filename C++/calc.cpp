//create a class calculator with two data memebers a and b and compute functionalities like add, sub, multi, divid.
//perform 2 calculations and print whose result is higher.

#include <iostream>
#include <conio.h>
using namespace std;

class calculator{
    int num1,num2;

    public:
    int sum(){
        return num1+num2;

    }
    int sub(){
        return num1-num2;
    }
    int div(){
        return num1/num2;
    }
    int prod(){
        return num1*num2;
    }

    int getData(){
        cout<<"Please enter the first integer: "<<endl;
        cin>>num1;
        cout<<"Please enter the second integer: "<<endl;
        cin>>num2;
    }

};

int main(){
    calculator calc;
    int numChoice,contiChoice;

    do{
    system("cls");
    cout<<"\t--CALCULATOR MENU--"<<endl<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cout<<"Please select 1-4 to perform calculations: ";
    cin>>numChoice;

    switch (numChoice){
        case 1:
        calc.getData();
        cout<<"\nThe Sum of the numbers is = "<<calc.sum();
        break;

        case 2:
        calc.getData();
        cout<<"\nThe Difference of the numbers is = "<<calc.sub();
        break;

        case 3:
        calc.getData();
        cout<<"\nThe Product of the numbers is = "<<calc.prod();
        break;

        case 4:
        calc.getData();
        cout<<"\nThe Division of the numbers is = "<<calc.div();
        break;
    }

    cout<<"\nDo you want to continue?(1 for YES & 0 for NO): ";
    cin>>contiChoice;
    }
    while(contiChoice!=0);
    system("cls");
    cout<<"\tBye! Sayonara :D";
    
 

return 0;
}