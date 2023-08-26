// C++ Reference Variables and Typecasting

#include <iostream>
using namespace std;

int c = 8;
int main()
{
    // **************************BUILT IN DATA TYPES*********************
    // int a,b,c;
    // cout<<"Enter the value of a ."<<endl;
    // cin>>a;
    // cout<<"Enter the value of b ."<<endl;
    // cin>>b;

    // c=a+b;
    // cout<<"The value of sum is : "<<c<<endl;
    // cout<<"The global c is : "<<::c<<endl;

    // ******************FLOAT,DOUBLE AND LONG DOUBLE LITERALS*****************
    float hg= 84.12f;
    long double kgh= 84.12l;
    // I can use capital letters (F,L) also. 
    cout<<"Size of 84.12 is "<<sizeof(84.12)<<endl;
    cout<<"Size of 84.12f is "<<sizeof(84.12f)<<endl;
    cout<<"Size of 84.12F is "<<sizeof(84.12F)<<endl;
    cout<<"Size of 84.12l is "<<sizeof(84.12l)<<endl;
    cout<<"Size of 84.12L is "<<sizeof(84.12L)<<endl;
    cout<<"The value of hg is : "<<hg<<endl<<"The value of kgh is : "<<kgh<<endl;

    // ********************REFERANCE VARIABLES***************
    // garima ------>hema------>hemlata------->chamad
    float x = 821;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    // *************TYPECASTING*********************
    // int high = 76;
    // float weight = 45.5;
    // cout << "The value of high is " << (float)high << endl;
    // cout << "The value of high is " << float(high) << endl;
    // cout << endl;
    // cout << "The value of weight is " << (int)weight << endl;
    // cout << "The value of weight is " << int(weight) << endl;
    // int c = int(weight);
    // cout << "The value of c is " << c << endl;

    // cout << "The expression is " << high + weight << endl;
    // cout << "The expression is " << high + int(weight) << endl;
    // cout << "The expression is " << high + (int)weight << endl;
    
    return 0;
}