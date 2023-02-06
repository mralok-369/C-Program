#include<iostream>
#include<math.h>
using namespace std;
int glo = 6; // global variable
void sum(){
    int a;
    cout<<glo<<"\n";
}
int main(){
    cout<<"This is tut of data types\n";
    int glo = 9; // local variable
    glo = 78;
    int a = 4,b = 5;
    float pi = 3.14;
    char c ='u';
    sum();
    cout<<"Here the value of a is "<<a<<" and The value of b is "<<b<<"\n";
    cout<<"The value of PI is : "<<pi<<"\n";
    cout<<"The value of c is : "<<c<<"\n";
    cout<<glo<<"\n";
    return 0;
}