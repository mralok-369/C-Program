#include<iostream>
using namespace std;
// function prototype
void greet(int n){
    if (n>=0 && n<12){
        cout<<"Hello, Good Morning....!!"<<endl;
    } 
    else if (n>=12 && n<15){
        cout<<"Hello, Good Afternoon....!!"<<endl;
    }
    else if (n>=15 && n<18){
        cout<<"Hello, Good Evening....!!"<<endl;
    }
    else if(n>=18 && n<=24) {
        cout<<"Hello, Good night....!!"<<endl;
    }  
    else {
        cout<<"Invalid Please enter a valid number..!!"<<endl;
    }  
}

int sum(int a, int b){
    return a+b;
}

int main(){
    // function call to greet
    int hrs;
    cout<<"\nEnter current hour (<=24) : ";
    cin>>hrs;
    greet(hrs);

    // function call to sum
    int n,m;
    cout<<"Enter two numbers : "<<endl;
    cin>>n>>m;
    cout<<"The sum of passed numbers is : "<<sum(n,m)<<endl;

    return 0;
}