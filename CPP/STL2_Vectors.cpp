#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    cout<<"Displaying this vector : "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";
    }
    cout<<endl;    
}

int main() {
    /*
    vector<int> vec1; // creating vector object by template (zero length vector)
    int element,size = 5;
    cout<<"Enter the size of your vector : "<<endl;
    cin>>size;
    for(int i=0; i<size; i++){
        cout<<"Enter an elements to add to this vector : "<<endl;
        cin>>element;
        vec1.push_back(element); // to insert at the end of vector
    }
    display(vec1); // displaying method for vector
    vec1.pop_back(); // delete an element from the end
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter, 566);
    vec1.insert(iter+1, 566); // to insert at 2nd position
    vec1.insert(iter+1,5, 566); // to insert 5 copy of given number
    display(vec1); // displaying method for vector
    */

//    vector<char> vec2(4); // 4-elements character vector
//    vec2.push_back('5');
//    display(vec2);

//    vector<char> vec3(vec2); // 4-elements character vector from vec2
//    display(vec3);

   vector<int> vec4(4,13); // 6-element vector of 3s
   display(vec4);
   cout<<vec4.size()<<endl;

    return 0;
}