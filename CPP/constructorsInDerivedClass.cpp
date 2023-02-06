#include<iostream>
using namespace std;
/* 
case1 :
class B: public A{
    // order of execution of constructor -> first A() then B()
};
case2 :
class A: public B, public C {
    // order of execution of constructor -> first B() then C() then A()
};
case3 :
class A: public B, virtual public C {
    // order of execution of constructor -> first C() then B() then A()
};
*/
class Base1 {
    int data1;
    public:
        Base1(int i) {
            data1 = i;
            cout<<"Base1 class constructor called "<<endl;
        }
        void printDataBase1(void) {
            cout<<"The value of the data1 is : "<<data1<<endl;
        }
};

class Base2 {
    int data2;
    public:
        Base2(int i) {
            data2 = i;
            cout<<"Base2 class constructor called "<<endl;
        }
        void printDataBase2(void) {
            cout<<"The value of the data2 is : "<<data2<<endl;
        }
};

class Derived : public Base1, public Base2 {
    int derived1, derived2;
    public:
        Derived(int a,int b,int c, int d): Base1(a), Base2(b){
        // Derived(int a,int b,int c, int d): Base2(b), Base1(a){
           derived1 = c;
           derived2 = d; 
           cout<<"derived constructor is called "<<endl;
        }
        void printDataDerived(void) {
            cout<<"The value of the derived1 is : "<<derived1<<endl
                <<"The value of the derived2 is : "<<derived2<<endl;
        }
};

int main() {
    Derived harry(1,2,3,4);
    harry.printDataBase1();
    harry.printDataBase2();
    harry.printDataDerived();

    return 0;
}