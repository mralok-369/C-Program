#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    //creating a connsturctor
    // constructor is a special member function with the same name as of the class.it is automatically invoked whenever we create an object.
    // it is used to intitiate the objects of its class.

    Complex(void); // constructor declaration
    void printNumber()
    {
        cout << "Your Complex number is : " << a << " + " << b << "i" << endl;
    }

};
Complex :: Complex(void){
    a = 10;
    b = 20;
}


int main() {
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}

// Characterstics of constructors
/*
--> It should be declared in the public section of the class
--> They are automatically invoked whenever the objects is created
--> They cannot returns values and Do not have return types 
--> It can have default arguments
--> We cannot refer to their address
*/