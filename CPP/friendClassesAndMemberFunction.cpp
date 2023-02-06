#include <iostream>
using namespace std;

// forwar declaration
class complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumRealComplex(complex, complex);
    int sumImgComplex(complex, complex);
};

class complex
{
    int a, b;
    // individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(complex o1, complex o2);
    // friend int Calculator ::sumImgComplex(complex o1, complex o2);

    // Alter : Declaring the entire calculator class as friends
    friend class Calculator;

public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printNumber()
    {
        cout << "Your Complex number is : " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumImgComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setNumber(2, 3);
    o1.printNumber();
    o2.setNumber(3, 4);
    o2.printNumber();

    Calculator calc;
    int real = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is : " << real << endl;
    int comp = calc.sumImgComplex(o1, o2);
    cout << "The sum of imginary part of o1 and o2 is : " << comp << endl;

    return 0;
}