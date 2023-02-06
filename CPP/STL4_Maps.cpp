#include<iostream>
#include<map>
#include<string>
using namespace std;
// maps --> used to store key value pairs (is a associative array)

int main() {
    map<string, int> marksMap;
    marksMap["harry"] = 98;
    marksMap["jack"] = 59;
    marksMap["rohan"] = 78;

    marksMap.insert({{"kozume",65}, {"kuroo",87}});

    map<string, int> :: iterator itr;
    for(itr=marksMap.begin(); itr!=marksMap.end(); itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    cout<<"The size is : "<<marksMap.size()<<endl;
    cout<<"The max-size is : "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is : "<<marksMap.empty()<<endl;

    return 0;
}