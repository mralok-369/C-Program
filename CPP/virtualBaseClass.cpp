#include<iostream>
using namespace std;
// virtual base class --> let A is a class and x is var of A and B,C inherited from A then var x will come in A and B and if we define a class D inherited from B and C the compiler will confused bcoz its have twio x var and cannot define which one to take so to remove this problem we use virtual class
// syntax -->  class B : virtual public A{ // code }; 
/*
    Student --> Test
    Student --> Sports
    Test --> Result
    Sports --> Result
*/
class Student {
    protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no = a;
        }
        void print_number(){
            cout<<"Your roll no is : "<<roll_no<<endl;
        }
};

class Test : virtual public Student {
    protected :
        float maths, physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(void){
            cout<<"Your maths marks : "<<maths<<endl;
            cout<<"Your physics marks : "<<physics<<endl;
        }
};

class Sports : virtual public Student {
    protected :
        float score;
    public:
        void set_score(float sc){
            score = sc;
        }
        void print_score(){
            cout<<"Your PT score is : "<<score<<endl;
        }
};

class Result : public Test, public Sports {
    private:
        float total;
    public:
        void display(void){
            total = maths+physics+score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is : "<<total<<endl;
        }
};

int main() {
    Result harry;
    harry.set_number(420);
    harry.set_marks(78.0,88.0);
    harry.set_score(9.0);
    harry.display();
    return 0;
}