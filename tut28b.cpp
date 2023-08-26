// More on C++ Friend Functions (Examples & Explanation)

#include<iostream>
using namespace std;

class c2;

class c1{
    int val1;
    friend void exchange(c1 &,c2 &);
    public:
    void indata(int a){
        val1 = a;
    }

    void display(){
        cout<<val1<<endl;
    }
};

class c2{
    int val2;
    friend void exchange(c1 &,c2 &);
    public:
    void indata(int a){
        val2 = a;
    }

    void display(){
        cout<<val2<<endl;
    }
};

/*
Trick to swap 2 numbers:
temp = a;
a = b;
b = temp;
*/

void exchange(c1 & x ,c2 & y){
    int temp = x.val1; 
    x.val1 = y.val2;
    y.val2 = temp;
}

int main(){
    c1 oc1;
    c2 oc2;

    oc1.indata(35);
    cout<<"The value of oc1 is ";
    oc1.display();
    oc2.indata(67);
    cout<<"The value of oc2 is ";
    oc2.display();
    exchange(oc1,oc2);

    cout<<"The value of oc1 after exchange becomes : ";
    oc1.display();
    cout<<"The value of oc2 after exchange becomes : ";
    oc2.display();
    
    return 0;
}