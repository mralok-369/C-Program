#include <iostream>
using namespace std;

// Recursion -> a fuction call itself until its base not come
int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    // Factorial of a number
    int num, fact = 1;
    cout << "Enter a number to find it's factorial : " << endl;
    cin >> num;
    // for(int i=1; i<=num; i++){
    //     if(num==0 || num==1){
    //         fact = 1;
    //     }
    //     else {
    //         fact = i*fact;
    //     }
    // }
    // cout<<"Factorial of "<<num<<" is = "<<fact<<endl;

    // by recursion
    // cout << "Factorial of " << num << " is = " << factorial(num) << endl;
    // cout << "The term in fibonacci sequence at position " << num << " is = " << fibonacci(num) << endl;
    for (int i = 0; i < num; i++)
    {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}