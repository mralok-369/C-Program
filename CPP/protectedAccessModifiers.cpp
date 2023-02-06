#include<iostream>
using namespace std;

class Base{
    protected:
        int a;  // private varible but can be inherited
    private:
        int b; // cannot be inherited
};

/*
------------------------------for a protected member-----------------------------------

                    public derivation      private derivation      protected derivation
private members     not inherited          not inherited           not inherited
protected members   protected              private                 protected
public members      public                 private                 protected
*/

class Derived : protected Base {

};

int main() {
    Base b;
    Derived d;
    // cout<<d.a<<endl; // will not work since a is protected in both base as well as derived class
    return 0;
}