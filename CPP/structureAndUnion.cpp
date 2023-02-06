#include<iostream>
using namespace std;

// structure -> user defined data types
// struct employee{
//     int id;
//     char favChar;
//     float salary;
// };

// typedef struct employee{
//     int id;
//     char favChar;
//     float salary;
// }ep;

// Union
union money{
    int rice;
    char car;
    float pounds;
};

int main(){
    // struct employee harry; // if not using typedef
    // ep harry; // if using typedef
    // harry.id = 1;
    // harry.favChar = 'H';
    // harry.salary = 14455.25;
    // cout<<"Id of harry is "<<harry.id<<endl;
    // cout<<"FavChar of harry is "<<harry.favChar<<endl;
    // cout<<"Salary of harry is "<<harry.salary<<endl;

    // union example
    union money m1;
    m1.rice = 34;
    m1.car = 'C';
    m1.pounds = 445.5;
    cout<<m1.pounds<<endl;

    // enum
    enum meal{ breakfast, lunch, dinner};
    // meal m1 = lunch;
    // cout<<m1; 
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    return 0;
}