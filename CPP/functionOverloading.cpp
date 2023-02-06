#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"using function with 2 args"<<endl;
    return a+b;
}

int sum(int a, int b,int c){
    cout<<"using function with 3 args"<<endl;
    return a+b+c;
}

int volume(double r, int h){
    return(3.14*r*r*h);
}

int volume(int a){
    return(a*a*a);
}

int volume(int l,int b, int h){
    return(l*b*h);
}


int main() {
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 6 and 7 is "<<sum(3,6,7)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is "<<volume(3,6)<<endl;
    cout<<"The volume of cube of radius 3 is "<<volume(3)<<endl;
    cout<<"The volume of cuboid of radius 3 and height 6 is "<<volume(3,6,7)<<endl;
    return 0;
}