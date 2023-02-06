#include<iostream>
using namespace std;

int main() {
    cout<<"This Tutorial for Control statements !! "<<endl;
    int age;
    cout<<"Tell me your age : "<<endl;
    cin>>age;
    // selection control statement : if - else atatement
    /*
    if(age<18){
        cout<<"You cannot come in to my party !!"<<endl;
    }
    else {
        cout<<"You can come to the party !!"<<endl;
    }*/

    // selection control statement : if - else ladder
    /*
    if(age<18){
        cout<<"You cannot come in to my party !!"<<endl;
    }
    else if(age==18){
        cout<<"You are akid and you will gate a kid pass to the party !!"<<endl;
    }
    else {
        cout<<"You can come to the party !!"<<endl;
    } */

    // selection control statement : switch - case statement
    switch (age)
    {
    case 18:
        cout<<"you are 18 !!"<<endl;
        break;
    case 22:
        cout<<"you are adult now !!"<<endl;
        break;
    case 2:
        cout<<"you are minor !!"<<endl;
        break;
    default:
        cout<<"No special cases !!"<<endl;
        break;
    }
    return 0;
}