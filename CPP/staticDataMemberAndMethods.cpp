#include<iostream>
using namespace std;

class Employee {
    int id;
    static int count;  //static class variable
    
    public:
        void setData(void){
            cout<<"Enter the id : "<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"The id of this employee is : "<<id<<" and this is employee number "<<count<<endl;
        }
        // static member function
        static void getCount(void){
            // cout<<id; // throws an error 
            cout<<"The value of count is "<<count<<endl;
        }
};

int Employee :: count;  // static class variable declaration default value is 0

int main() {
    Employee harry,rohan,lavish;
    // harry.id = 1;
    // harry.count = 1; // cannot do this as id and count is private 
    harry.setData();
    harry.getData();
    Employee::getCount(); // running static methods

    rohan.setData();
    rohan.getData();
    Employee::getCount();

    lavish.setData();
    lavish.getData();
    Employee::getCount();

    
    return 0;
}