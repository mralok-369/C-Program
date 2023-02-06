#include<iostream>
using namespace std;

class Number{
    int a;
    public:
        Number(){}
        Number(int num){
            a = num;
        }
        // when no copy constructor is found , compiler supplies its own copy constructor
        // copy constructor
        Number(Number &obj){
            cout<<"Copy constructor called :"<<endl;
            a = obj.a;
        }
        void display(){                
            cout<<"The number for this object is : "<<a<<endl;
        }
};

int main() {
    Number x,y,z(45);
    x.display();
    y.display();
    z.display();
    // z1 shuold exactly resemble z or x or y
    Number z1(x);
    z1.display(); // copy constructor invoked
    Number z2;
    z2 = z; // copy constructor is not called
    Number z3 = z; // copy constructor is invoked
    

    return 0;
}