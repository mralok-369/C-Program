#include<iostream>
#include<list>
using namespace std;

// template<class T>
void display(list<int> &lst){
    cout<<"List is : ";
    list<int> :: iterator it;
    for (it = lst.begin(); it!=lst.end(); it++){
        cout<<*it<<"-->";
    }
    cout<<endl;
}

int main() {
    list<int> list1; // list of 0 length
    //--------------insertion in list1------------
    list1.push_back(5);
    list1.push_back(16);
    list1.push_back(12);
    list1.push_back(9);
    list1.push_back(7);
    display(list1);
    //----------------------------------------------
    // list1.sort();   // sorting the list
    //------------removing elements from list1-----------
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(9); // removes all occurence elements
    //---------------------------------------------------
    display(list1);
    
    //------------insertion in list2---------------------------
    list<int> list2(3); // Empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 14;
    iter++;
    display(list2);
    // -------------------------------------------------------

    // merging both lists
    list1.merge(list2);
    list1.sort();
    cout<<"After merging : ";
    display(list1);
    list1.reverse();
    cout<<"After reversing : ";
    display(list1);

    return 0;
}