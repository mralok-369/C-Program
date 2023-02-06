#include<iostream>
using namespace std;

class BaseClass {
    public:
        int var_base;
        void display(){
            cout<<"Displaying Base class variable var-base : "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass {
    public:
        int var_derived;
        void display(){
            cout<<"Displaying Base class variable var-base : "<<var_base<<endl;
            cout<<"Displaying Derived class variable var-derived : "<<var_derived<<endl;
        }
};

int main() {
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; // pointing base class pointer to derived class (premitted but bind with base class)

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134; // it will throw an error
    base_class_pointer->display(); // it will run only base class function bcoz it pointed by base class pointer

    base_class_pointer->var_base = 3400;
    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 459;
    derived_class_pointer->var_derived = 450;
    derived_class_pointer->display();
    
    return 0;
}