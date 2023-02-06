#include<iostream>
using namespace std;
/*
class templates with multiple parameters
----------------------syntax--------------------------
template<class T1, class T2,.......,(comma seprated)>
class nameOfClass{
    // class body
}
------------------------------------------------------
*/
template<class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(T1 a, T2 c){
            data1 = a;
            data2 = c;
        }

        void display(){
            cout<<this->data1<<endl<<this->data2<<endl;
        }
};

int main() {
    // myClass<int, char> obj(1, 'c');
    // myClass<int, float> obj(1, 1.8);
    // myClass<char, char> obj('1', 'c');
    myClass<char, float> obj('C', 1.8);
    obj.display();

    return 0;
}