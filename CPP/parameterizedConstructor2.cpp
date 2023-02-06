#include<iostream>
#include<math.h>
using namespace std;

class Point {
    int x,y;
    public:
        Point(int a, int b){
            x = a;
            y = b;
        }
        void display(){
            cout<<"The poit is ("<<x<<","<<y<<")"<<endl;
        }

        friend float distance(Point,Point);
};

float distance(Point p,Point q){
    int x = (p.x - q.x);
    int y = (p.y - q.y);
    float res = sqrt((x*x) + (y*y));
    return res;
}

int main() {
    Point p(1,2);
    p.display();

    Point q(4,6);
    q.display();

    cout<<"The distance between points : "<<distance(p,q)<<endl;

    return 0;
}