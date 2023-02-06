#include<iostream>
using namespace std;

class Complex{
    int a,b;

    public:
    Complex(int,int); // constructor declaration
    void printNumber()
    {
        cout << "Your Complex number is : " << a << " + i " << b << endl;
    }

};
// perameterized constructor definition of complex class
Complex :: Complex(int x,int y){
    a = x;
    b = y;
}


int main() {
    // implicit call
    Complex a(4,6);
    a.printNumber();

    // explicit call
    Complex b = Complex(5,7);
    b.printNumber();

    return 0;
}
