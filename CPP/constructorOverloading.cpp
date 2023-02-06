#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    // constructor overloading
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex()
    {
        a = 0;
        b = 0;
    }
    void printNumber()
    {
        cout << "Your Complex number is : " << a << " + i" << b << endl;
    }
};

int main()
{
    Complex c3;
    c3.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c1(4, 6);
    c1.printNumber();

    return 0;
}