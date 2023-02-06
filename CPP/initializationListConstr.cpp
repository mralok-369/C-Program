#include <iostream>
using namespace std;
/*
syntax for initialization list in constructor:
constructor(arumnet-list): initialization-section
{
    assignment + other code;
}
class Test{
    int a,b;
    public:
        Test(int i,int j) : a(i), b(j) {
            // body of constructor
        }
};
*/
class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j), a(i + b)  --> Red flag this will create problem because a will be initialized first
    Test(int i, int j) : a(i)
    {
        b = j;
        cout << "Constructor executed" << endl
             << "Value of a is " << a << endl
             << "Value of b is " << b << endl;
    }
};
int main()
{
    Test t(4, 6);
    return 0;
}