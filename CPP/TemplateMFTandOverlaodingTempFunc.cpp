#include <iostream>
using namespace std;
// Member Function Templates & Overloading Templates Functions in c++

template <class T>
class Harry
{
public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};
// defining member function outside the class
template<class T>
void Harry<T> :: display()
{
    cout << data << endl;
}

// void func(int a){
//     cout<<"I am first func() "<<a<<endl;
// }

template< class T>
void func(T a){
    cout<<"I am templatized func() "<<a<<endl;
}

template< class T>
void func1(T a){
    cout<<"I am templatized func1() "<<a<<endl;
}


int main()
{
    // Harry<int> h(5);
    Harry<float> h(5.789);
    // Harry<char> h('j');
    cout << h.data << endl;
    h.display();

    func(4); // Exact match takes the highest priority

    return 0;
}