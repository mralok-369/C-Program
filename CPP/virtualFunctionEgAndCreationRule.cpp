#include<iostream>
#include<cstring>
using namespace std;
/*
    ---------Rules for virtual functions-------------
    1. They cannot be static
    2. They are accessed by object pointers
    3. Virtual function can be a friend function of another class 
    4. A virtual function in base class might not be used
    5. A virtual function defined in the base class there is no necessity of redefining it in the derived class
*/
class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display(){cout<<"Bogus code"<<endl;}
};

class CWHvideo : public CWH {
    float videoLength;
    public:
        CWHvideo(string s, float r, float vl) : CWH(s,r) {
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title : "<<title<<endl;
            cout<<"Ratings : "<<rating<<" out of 5 star"<<endl;
            cout<<"The length of the video is : "<<videoLength<<" minutes"<<endl;
        }
};

class CWHText : public CWH {
    int words;
    public:
        CWHText(string s, float r, int wc) : CWH(s,r) {
            words = wc;
        }
        void display(){
            cout<<"This is a amazing Text tutorial with title : "<<title<<endl;
            cout<<"Ratings of this text tutorial : "<<rating<<" out of 5 star"<<endl;
            cout<<"Number of words in this text tutorial is : "<<words<<" words"<<endl;
        }
};

int main() {
    string title;
    float rating, vlen;
    int words;

    // for CWH video
    title = "C++ tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHvideo cppVideo(title,rating,vlen);
    // cppVideo.display();

    // for CWH Text
    title = "django text tutorial";
    words = 445;
    rating = 4.22;
    CWHText djText(title,rating,words);
    // djText.display();

    CWH* tuts[2];
    tuts[0] = &cppVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}