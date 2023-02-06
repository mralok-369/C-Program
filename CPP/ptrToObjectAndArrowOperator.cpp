#include<iostream>
using namespace std;

class Complex{
    int real,img;
    public:
        void setData(int a, int b){
            real = a;
            img = b;
        }
        void getData(){
            cout<<"The real part is : "<<real<<endl;
            cout<<"The imaginary part is : "<<img<<endl;
        }
};

int main() {
    Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex;
    // (*ptr).setData(1,54); // is exactly same as below line
    ptr->setData(1, 5);
    // (*ptr).getData(); 
    ptr->getData();

    // Array of objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1,7);
    ptr1->getData();
    (ptr1+1)->setData(4,5);
    (ptr1+1)->getData();

    return 0;
}