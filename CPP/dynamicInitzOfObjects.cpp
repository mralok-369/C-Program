// Dynamic Initialization of Objects using Constructor
#include<iostream>
using namespace std;

class BankDeposit{
    int principal;
    int year;
    float intrestRate;
    float returnValue;

    public:
        BankDeposit(){}
        BankDeposit(int p,int y,float r);
        BankDeposit(int p,int y,int r);
        void show();
};

BankDeposit :: BankDeposit(int p, int y,float r){
    principal = p;
    year = y;
    intrestRate = r;

    returnValue =principal;
    for(int i=0; i<y; i++){
        returnValue = returnValue * (1+intrestRate);
    }
}
BankDeposit :: BankDeposit(int p, int y,int r){
    principal = p;
    year = y;
    intrestRate = float(r)/100;

    returnValue =principal;
    for(int i=0; i<y; i++){
        returnValue = returnValue * (1+intrestRate);
    }
}
void BankDeposit :: show(){
    cout<<"Principal amaount was : "<<principal
        <<" Return value after : "<<year
        <<" years is : "<<returnValue<<endl; 
}

int main() {
    // intrest rate is flaoting value
    BankDeposit bd1,bd2,bd3;
    
    bd3.show();

    int p,y,R;
    float r;
    cout<<"Enter the value of p y and r(float) : "<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposit(p,y,r);
    bd1.show();

    // intrest rate is integer value

    cout<<"Enter the value of p y and R(int) : "<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposit(p,y,R);
    bd2.show();


    return 0;
}