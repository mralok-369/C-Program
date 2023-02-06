#include<iostream>
using namespace std;

int main(){
    // pointer -> a datatype which holdes addressof other variable
    // & -------> addressof operator
    int a = 3;
    int* b = &a;
    // int* b;
    // b = &a;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of b is "<<&b<<endl;

    // * ------->(value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    // Pointer to pointer
    int** c = &b;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address c is "<<*c<<endl;
    cout<<"The value at address c (address of b) is "<<**c<<endl;
    return 0;
}