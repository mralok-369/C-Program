#include<iostream>
using namespace std;

class c2; 

class c1{
    int val1;
    friend void exchange(c1 &,c2 &);
    public:
        void intData(int a){
            val1 = a;
        }
        void display(void){
            cout<<"val1 : "<<val1<<endl;
        }
};

class c2{
    int val2;
    friend void exchange(c1 &,c2 &);
    public:
        void intData(int a){
            val2 = a;
        }
        void display(void){
            cout<<"val2 : "<<val2<<endl;
        }
};

void exchange(c1 &x, c2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main() {
    c1 obj1;
    obj1.intData(5);
    c2 obj2;
    obj2.intData(8);

    cout<<"Before swapping : "<<endl;
    obj1.display();
    obj2.display();

    exchange(obj1,obj2);
    cout<<"After swapping :"<<endl;
    obj1.display();
    obj2.display();
    return 0;
}