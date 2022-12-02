//wap in c to find area and perimeter of 2 rectangles using class and object

//use garnai parxa
#include <iostream>
using namespace std;

//class declaration
class rect{
    //private data members
    int l,b;
    
    public: //access specifier
    //member functions
    int findArea(){
        return l*b;
    }
    int findPerimeter(){
        return 2*(l+b);
    }
    //using this fun to assign data to private data members
    void setLength(){
    cout<<"Enter length of rectangle: ";
    cin>>l;
    cout<<"Enter breadth of rectangle: ";
    cin>>b;
    }
};

int main(){
    //object creation
    rect r,s;
    //using setLength() to assign data to private data members
    r.setLength();
    cout<<"Area of rectangle 1st is "<<r.findArea()<<endl;
    cout<<"Perimeter of rectangle 1st is "<<r.findPerimeter()<<endl;


    s.setLength();
    cout<<"Area of rectangle 2nd is "<<s.findArea()<<endl;
    cout<<"Perimeter of rectangle 2nd is "<<s.findPerimeter()<<endl;

//comparing area of two rectangles
    cout<<"Bigger rectangle is";
    if (r.findArea()>s.findArea())
        cout<<" 1st"<<endl;
    else
        cout<<" 2nd"<<endl;

    return 0;    
}
