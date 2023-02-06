#include<iostream>
#include<fstream> // for file I/O stream
using namespace std;
// Reading and Writing in files
/*
The Useful classes for working with files in c++ are :
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

in order to work with files in c++ you will have to open it : there are 2 ways to open a file :
1. using the constructor
2. using the member function open() of the class
*/
int main() {
    string str = "Harry bhai";
    string str2;
    // opening files using constructor and writing on it
    // ofstream out("sample.txt"); // write operation
    // out<<str;

    // opening file using constructor and reading to it
    ifstream in("sample2.txt");
    // in>>str2;
    getline(in,str2);
    cout<<str2<<endl;

    return 0;
}