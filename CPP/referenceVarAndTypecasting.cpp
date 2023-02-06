#include<iostream>
using namespace std;

int c = 45;

int main(){
    //*************Built in data types **************
    // int a,b,c;
    // cout<<"Enter the value of a:"<<endl;;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;;
    // cin>>b;
    // c = a+b;
    // cout<<"The sum is : "<<c<<endl;
    // cout<<"The global c is : "<<::c<<endl;  // :: scope resolution operator for accessing global variable
        
    //************* float double, long double literals **************
    // float d=34.4F;
    // long double e = 34.4L;
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    //************* References variable *********************
    // Alok ---> Vishal -----> Aaloo ----> Alex
    // float x = 455;
    // float & y = x; // y is a reference variable
    // cout<<x<<endl;
    // cout<<y<<endl;

    //*************Typecasting**************
    int p = 45;
    float q = 45.46;
    cout<<"The value of p is "<<(float)p<<endl;
    cout<<"The value of p is "<<float(p)<<endl;
    cout<<"The value of q is "<<(int)q<<endl;

    cout<<"The expression is "<<p + q<<endl;
    cout<<"The expression is "<<p + int(q)<<endl;
    cout<<"The expression is "<<p + (int)q<<endl;
    return 0;
}