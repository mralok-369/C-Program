#include<iostream>
#include<fstream>
#include<string>
using namespace std;
// open(), and eof() functions from fstrem

int main() {
    ofstream out; // creating a object of ofstream
    out.open("sample.txt"); // open file
    out<<"This is me\n";
    out<<"This is also me\n";
    out<<"This is lazy me\n";
    out.close();  // close file

    ifstream in; // creating an object of instream class
    string str, str2;
    in.open("sample.txt");
    // in>>str>>str2;
    // cout<<str<<str2<<endl;
    while(in.eof() == 0 ){
        getline(in,str);
        cout<<str<<endl;
    }
    in.close();

    return 0;
}