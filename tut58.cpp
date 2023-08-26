// Abstract Base Class & Pure Virtual Functions in C++

#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s , float r){
            title = s;
            rating = r;
        }
        virtual void display() = 0; // do-nothing function ---> pure virtual function
        // virtual void display(){
        //     cout<<"bogus code . "<<endl;
        // }
        // void display(){
        //     cout<<"bogus code"<<endl;
        // }
};

class CWHVideo : public CWH{
    float videoLength;
    public:
        CWHVideo(string s , float r , float vL) : CWH(s, r){
            videoLength = vL;
        }
        void display(){
            cout<<endl;
            cout<<"This is an amazing video with title "<<title<<"."<<endl;
            cout<<"Ratings : "<<rating<<" out of 5 stars . "<<endl;
            cout<<"Length of this video is :  "<<videoLength<<" minutes . "<<endl;
            cout<<endl<<endl;
        }
};

class CWHText : public CWH{
    int words;
    public:
        CWHText(string s , float r , int wc) : CWH(s, r){
            words = wc;
        }
        void display(){
            cout<<"This is an amazing text tutorial with title "<<title<<"."<<endl;
            cout<<"Ratings of this text tutorial is "<<rating<<" out of 5 stars ."<<endl;
            cout<<"No. of words in this text tutorial is : "<<words<<endl;
        }
};

int main(){
    string title;
    float rating , video_length;
    int words;

    // for Code with Harry Video
    title = "Django Tutorial";
    video_length = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title , rating , video_length );
    // djVideo.display();

    // for Code with Harry Text
    title = "Django Tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title , rating , words );
    // djText.display();

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}