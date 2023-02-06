#include<iostream>
using namespace std;

// float funcAverage(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// float funcAverage2(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

// ----------------function templates-------------
template <class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a+b)/2.0;
    return avg;
}

// function template for swapping two any tple of numbers
template <class T>
void swapp(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // float a = funcAverage(2.4,5);
    // float a = funcAverage(2,5.0);
    float a = funcAverage(2,5);
    printf("The average of numbers : %.3f\n",a);

    // swapping functions
    int x = 5, y = 7;
    swapp(x,y);
    cout<<x<<endl<<y<<endl;
    return 0;
}