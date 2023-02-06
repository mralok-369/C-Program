#include <iostream>
#include <string.h>
using namespace std;

class binary
{
// private: // by default
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number : " << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary :: ones_compliment(void)
{
    chk_bin(); // nesting binary function
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else 
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout<<"\nDisplaying your binary number :"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<"\n";
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}
/*
    OOPs - classes and object

    c++  --> initianlly called --> c with classes by stroustroup
    class --> extension of structure (in c)
    structure had limitations --> members are public
                              --> No methods
    classes --> structure + more
    classes --> can have methods and properties
    classes --> can make few members as private & few as public
    structure in c++ are typedef
    object are declare along with class declaration
*/
