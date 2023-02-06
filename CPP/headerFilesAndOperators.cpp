// there are two types of header files  :
// 1. system header files: it comes with the compiler 
#include<iostream>
// 2. user defined header files : it is written by the programmer
// #include"this.h"; this will produce an error if this,h files is not in current directory
using namespace std;

int main(){
    int a=10,b=5;
    cout<<"operators in c++ "<<endl;
    cout<<"There are following operators in c++"<<endl;

    // Arithmetic operators
    // cout<<"The value of a + b is "<<a+b<<endl;
    // cout<<"The value of a - b is "<<a-b<<endl;
    // cout<<"The value of a * b is "<<a*b<<endl;
    // cout<<"The value of a / b is "<<a/b<<endl;
    // cout<<"The value of a % b is "<<a%b<<endl;
    // cout<<"The value of a++ is "<<a++<<endl;
    // cout<<"The value of a-- is "<<a--<<endl;
    // cout<<"The value of ++a is "<<++a<<endl;
    // cout<<"The value of --a is "<<--a<<endl;

    // Assignment operator -> used to assign value to variable
    // int a=3, b=9;
    // char d = 'd';

    // comparison operator
    // cout<<"The value of a == b is "<<(a==b)<<endl;
    // cout<<"The value of a != b is "<<(a!=b)<<endl;
    // cout<<"The value of a > b is "<<(a>b)<<endl;
    // cout<<"The value of a >= b is "<<(a>=b)<<endl;
    // cout<<"The value of a < b is "<<(a<b)<<endl;
    // cout<<"The value of a <= b is "<<(a<=b)<<endl;

    //Logical operators
    cout<<"The value of Logical AND is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of Logical OR is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of Logical NOT is "<<(!(a==b))<<endl;


    return 0;
}