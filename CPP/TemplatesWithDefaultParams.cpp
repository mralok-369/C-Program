#include<iostream>
using namespace std;

template<class T1 = int, class T2 = float, class T3 = char>
class Harry {
    public:
        T1 a;
        T2 b;
        T3 c;
        Harry(T1 x,T2 y, T3 z){
            a = x;
            b = y;
            c = z;
        }
        void display(){
            cout<<"The value of a is : "<<a<<endl;
            cout<<"The value of b is : "<<b<<endl;
            cout<<"The value of c is : "<<c<<endl;
        }
};


int main() {
    // Harry<> h(4,6.4,'p');  // using default data types
    // Harry<float,int> h(6.4,5,'f'); // using specified data types
    Harry<float,char,int> h(6.4,'p',5); // using specified data types
    h.display();

    return 0;
}