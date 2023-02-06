#include<iostream>
using namespace std;
/*
    Destructor naver take an arguments nor does it returns any values
*/
int count = 0;
class Num{
    public:
        Num(){
            count++;
            cout<<"This is the time when constructor is called for object number "<<count<<endl;
        }
        // destructor
        ~Num(){
            cout<<"This is time when my dstructor is called for object number "<<count<<endl;
            count--;
        }
};

int main() {
    cout<<"We are inside our main function "<<endl;
    cout<<"Creating first object n1"<<endl;
    Num n1;
    {
        cout<<"Entering to the block "<<endl;
        cout<<"Creating two more objects."<<endl;
        Num n2,n3;
        cout<<"Exiting the block"<<endl;
    }
    cout<<"back to main"<<endl;
    return 0;
}