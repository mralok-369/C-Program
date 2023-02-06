#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
// Function Objects (Functor) : Function wrapped in a class so that it available like an object ()
int main() {
    int arr[] = {1, 4, 12, 3, 100, 54};
    // sort(arr, arr+5); // sort first 5 elements in ascending order
    sort(arr, arr+6, greater<int>()); // sort first 6 elements in decreasing order
    for(int i=0; i<6; i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}