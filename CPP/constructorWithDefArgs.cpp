#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    int data3;
    public:
    // here defaut arguments for b and c are 9 and 8
        Simple(int a,int b=9,int c=8){ 
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void printData();
};

void Simple :: printData(){
    cout<<"The value of data1 is "<<data1<<" and data2 is "<<data2<<" and data3 is "<<data3<<endl;
}

int main() {
    Simple s(1);
    s.printData();

    Simple x(1,4);
    x.printData();

    Simple y(1,4,6);
    y.printData();

    return 0;
}