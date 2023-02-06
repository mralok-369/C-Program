#include<iostream>
using namespace std;
/*
    syntax for multiple inheritance
    class derived : visibillty-mode base1, visibility-mode base2{
        // class body
    }
*/
// first class
class Base1 {
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }
};

// second class
class Base2{
    protected:
        int base2int;
    public:
        void set_base2int(int b){
            base2int = b;
        }
};

// third class
class Base3{
    protected:
        int base3int;
    public:
        void set_base3int(int c){
            base3int = c;
        }
};

// class derived from base1, base2, base3
class Derived : public Base1, public Base2,public Base3 {
    public:
        void show(){ 
            cout<<"The value of Base1 is : "<<base1int<<endl; 
            cout<<"The value of Base2 is : "<<base2int<<endl; 
            cout<<"The value of Base3 is : "<<base3int<<endl; 
            cout<<"The sum of these value is : "<<base1int+base2int+base3int<<endl; 
        }
};

// driver code
int main() {
    Derived harry;
    harry.set_base1int(45); 
    harry.set_base2int(35); 
    harry.set_base3int(25); 
    harry.show();

    return 0;
}