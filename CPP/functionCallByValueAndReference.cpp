#include<iostream>
using namespace std;

int sum(int a,int b){
    int c = a+b;
    return c;
}
// this will not swap the values
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }

// swap by address of variables
void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

// call by reference using c++ reference variables
void swapRefVar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a=4,b=5;
    cout<<"\nThe sum of 4 and 5 is "<<sum(a,b)<<endl; // call by value
    
    cout<<"\nBefore swapping : \n"<<"a = "<<a<<"\nb = "<<b<<endl;
    // swap(a,b); // this will not swap

    // swap(&a,&b); // call by reference

    swapRefVar(a,b); // call by reference var
    cout<<"\nAfter swapping : \n"<<"a = "<<a<<"\nb = "<<b<<endl;
    return 0;
}