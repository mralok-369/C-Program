#include<iostream>
using namespace std;
class A{
    int a;
    public:
        // void setData(int a){
        //     this->a = a;  // use of this pointer
        // }

        // the below sentence returns an object using this keyword
        A & setData(int a){
            this->a = a;  // use of this pointer
            return *this;
        }

        void getData(){
            cout<<"The value of a is : "<<a<<endl;
        }
};
int main() {
    // this is a keyword which is a ponter which points to the objects which invokes the member function
    A a;
    a.setData(4).getData();  // since we get an object in return so we can run getdata function
    // a.getData();
    return 0;
}