#include <iostream>
using namespace std;
// friend function in c++
class complex
{
    int a;
    int b;

public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    friend complex sumComplex(complex o1, complex o2);

    void printNumber()
    {
        cout << "Your Complex number is : " << a << " + " << b << "i" << endl;
    }
};

complex sumComplex(complex o1,complex o2){
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1,c2,sum;
    c1.setData(1,4);
    c1.printNumber();

    c2.setData(5,8);
    c2.printNumber();

    sum = sumComplex(c1,c2);
    sum.printNumber();

    return 0;
}

/*
--> Not in the scope of class
--> since it is not in the scope of the class it cannot be called from the object of that class
--> can be invoked without the help of any object
--> usually contains the object as arguments
--> can be declared inside public or private section of the class
--> it cannot access the member directly by their names and objects_name.member_name to access any member

*/