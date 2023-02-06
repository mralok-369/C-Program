#include<iostream>
using namespace std;

// inline funnction
inline int product(int a, int b){
    // not recomended to use below lines with inline function
    return a*b;
}

// default argument
float  moneyReceived(int currentMonney,float factor=1.04){  // here factor is a default value
    return currentMonney*factor;
}

// constant arguments
int strlen(const char *p){
    
}

int main(){
    // int a,b;
    // cout<<"Enter the value of a and b : "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is : "<<product(a,b)<<endl;

    int money = 100000;
    cout<<"If you have "<<money<<" in your bank account, you will receive "<<moneyReceived(money)<<" Rs after 1 year."<<endl;
    cout<<"If you have "<<money<<" in your bank account, you will receive "<<moneyReceived(money,1.1)<<" Rs after 1 year."<<endl;


    return 0;
}