#include<iostream>
#include<cmath>
using namespace std;
/*
    create 2 calculator
    --> simpleCalculator  --> takes input of 2 num using a utility and performs +,-,*,/ and display results.
    --> scientificCalculator --> takes input of 2 num using a utility and performs any four scientific operation of your choice and displays the results using functions.
    --> create another class HybridCalculator and inherit it using above two classes :
    Q1. what type of inheritance are you using
    Q2. which mode of inheritance are you using
    Q3. create a object of hybridcalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented
*/
class SimpleCalculator {
    int num1;
    int num2;
    public: 
        void set_number_of_simple(){
            int a,b;
            cout<<"Enter two numbers to performs simple operations : "<<endl;
            cin>>a>>b;
            num1 = a;
            num2 = b;
        }
        void sum(){
            cout<<"The sum of numbers is : "<<num1+num2<<endl;
        }
        void difference(){
            cout<<"The difference of numbers is : "<<num1-num2<<endl;
        }
        void product(){
            cout<<"The product of numbers is : "<<num1*num2<<endl;
        }
        void division(){
            cout<<"The division of numbers is : "<<num1/num2<<endl;
        }
};

class ScientificCalculator {
    int n1;
    public: 
        void set_number_of_scientific(){
            int c;
            cout<<"Enter a number to perform scientific operations : "<<endl;
            cin>>c;
            n1 = c;
        }
        void logOfNum(){
            cout<<"The log of number is : "<<log(n1)<<endl;
        }
        void sinOfNum(){
            cout<<"The sine of number is : "<<sin(n1)<<endl;
        }
        void cosOfNum(){
            cout<<"The cosines of number is : "<<cos(n1)<<endl;
        }
        void tanOfNum(){
            cout<<"The tancent of number is : "<<tan(n1)<<endl;
        }
};

class HybridCalculator : public SimpleCalculator,public ScientificCalculator {
    int n;
    public:
        void set_hybrid_number(void){
            cout<<"Enter a number for other operations : "<<endl;
            cin>>n;
        }
        void square_root(){
            cout<<"Square root of the number : "<<sqrt(n)<<endl;
        }
};

int main() {
    HybridCalculator HC;
    // for simple calculator
    HC.set_number_of_simple();
    HC.sum();
    HC.difference();
    HC.product();
    HC.division();

    // for scientific calculator
    HC.set_number_of_scientific();
    HC.logOfNum();
    HC.sinOfNum();
    HC.cosOfNum();
    HC.tanOfNum();

    // for hybrid calculator
    HC.set_hybrid_number();
    HC.square_root();

    return 0;
}