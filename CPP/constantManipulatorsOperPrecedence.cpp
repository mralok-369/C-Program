#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    // int a = 34;
    // cout<<"The value of a is "<<a<<endl;
    // a = 45;
    // cout<<"The value of a is "<<a<<endl;

    // constants in c++
    // const int a = 3;
    // cout<<"The value of a is "<<a<<endl;
    // a = 45;  // we cannot change the value of a const variable it will throw an error
    // cout<<"The value of a is "<<a<<endl;

    // manipulators ->> used in data display formating
    // int a = 3, b=78, c=1233;
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of b is "<<b<<endl;
    // cout<<"The value of c is "<<c<<endl;
    // cout<<"The value of a is "<<setw(4)<<a<<endl;
    // cout<<"The value of b is "<<setw(4)<<b<<endl;
    // cout<<"The value of c is "<<setw(4)<<c<<endl;

    // operator precedence
    int a=3,b=4;
    int c=((((a*5)+b)-45)+87);
    cout<<c<<endl;

    return 0;
}