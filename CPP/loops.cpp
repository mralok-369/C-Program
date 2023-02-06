#include<iostream>
using namespace std;

int main() {
    int count,i;
    cout<<"How many times you want to run...??"<<endl;
    cin>>count;
    // while loop
    // while (i<=count)
    // {
    //    cout<<i<<endl;
    //    i++;
    // }

    // do while loop
    do 
    {
       cout<<i<<endl;
       i++;
    } while(i<=count);

    // for loop
    // for (int i=1; i<=count; i++)
    // {
    //     cout<<i<<endl;
    // }

    return 0;
}