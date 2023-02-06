#include<iostream>
using namespace std;

// first level
class Student{
    protected: 
        int roll_number;
    public:
        void set_roll_Number(int);
        void get_roll_Number(void);
};
void Student :: set_roll_Number(int r){
    roll_number = r;
}
void Student :: get_roll_Number(){
    cout<<"The roll number is : "<<roll_number<<endl;
}

// second level
class Exam : public Student {
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};
void Exam :: set_marks(float m1, float m2){
        maths = m1;
        physics = m2;
}
void Exam :: get_marks(void){
    cout<<"The marks obtained in physics are : "<<physics<<endl;
    cout<<"The marks obtained in maths are : "<<maths<<endl;
}

// third level
class Result : public Exam {
    float percentage;
    public:
        void display(){
            get_roll_Number();
            get_marks();
            cout<<"Your percentage is : "<<(maths+physics)/2<<"%"<<endl;
        }
};

// driver code
int main() {
    Result std;
    std.set_roll_Number(420);
    std.set_marks(94.0,90.0);
    std.display();

    return 0;
}