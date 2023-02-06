#include<iostream>
using namespace std;

int main(){
    // Array --> collection of similar datatype which allocate memory in contiguous manner
    int marks[] = {23, 45, 56, 89};
    cout<<"These are marks : "<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    int mathMarks[4];
    mathMarks[0] = 2278;
    mathMarks[1] = 688;
    mathMarks[2] = 28;
    mathMarks[3] = 78;
    cout<<"These are math marks : "<<endl;
    // for (int i = 0; i < 4; i++)
    // {
    //    cout<<"The value of marks at "<<i<<" is "<<mathMarks[i]<<endl;
    // }
    int i;
    while (i<4)
    {
        cout<<"The value of marks at "<<i<<" is "<<mathMarks[i]<<endl;
        i++;
    }

    // array and pointers
    int* p = marks;    
    cout<<"the value of marks[0] is "<<*p<<endl;
    cout<<"the value of marks[1] is "<<*(p+1)<<endl;
    cout<<"the value of marks[2] is "<<*(p+2)<<endl;
    cout<<"the value of marks[3] is "<<*(p+3)<<endl;
    
    return 0;
}