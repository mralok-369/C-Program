#include<iostream>
#include<fstream>
using namespace std;

int main() {
    // connection our file with hout stream
    ofstream hout("sample2.txt");
    //creating a name string and filling it with the string eneterd by the user
    string name;
    cout<<"Enter a name : "<<endl;
    cin>>name;
    // writing to the above file
    hout<<name + " is my name";
    hout.close();

    ifstream hin("sample2.txt");
    string content;
    // hin>>content; // reading only first word of line
    getline(hin,content); // rading a line
    cout<<"The content of this file is --> "<<content<<endl;

    return 0;
}