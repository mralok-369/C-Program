#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};
// Derived class -> synatx {class (derivd-class-name) : (visibility-mode) (base-class-name)}
// visibility mode--> public or private {default-visibility-mode(private)}
// public visibility mode -> public members of the base class becoms public members of the derived class
// private visibility mode -> public members of the base class becoms private members of the derived class
// private members are never inherited
// creating a programmer class from employee class
class Programmer : Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }
    int languageCode = 9;
    void getData(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), Rohan(2);
    cout << harry.salary << endl;
    cout << Rohan.salary << endl;

    Programmer skilff(10);
    cout << skilff.languageCode << endl;
    skilff.getData();
    // skilff.id<<endl; // this is private bcoz of inheritance if we change its visibility then we can access
    return 0;
}