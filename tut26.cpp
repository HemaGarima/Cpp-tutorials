// Friend Functions in C++

// Properties of friend functions. 
/*
1. Not in the scope of class.
2. Since it is not in the scope of the class, it cannot be called from the object of 
that class c1.sumComplex() == invalid 
3. Can be invoked without the help of any object.
4. Usually contain the objects as arguments. 
5. Can be declared inside public and private sections of class. 
6. It cannot access the members directly by their names and need object_name.member_name
   to access any member. 
*/

#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    void setNumber(int n1,int n2){
        a = n1;
        b = n2;
    }
    /* Below line means that non member - sumComplex function is allowed to do 
    anything with my private members.*/
    friend Complex sumComplex (Complex o1,Complex o2);
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

Complex sumComplex(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a + o2.a) , (o1.b + o2.b));
    return o3;
}

int main(){
    Complex c1,c2,sum;
    c1.setNumber(1,4);
    c1.printNumber();
    // cout<<endl;
    c2.setNumber(5,8);
    c2.printNumber();
    cout<<endl;
    sum = sumComplex(c1,c2);
    sum.printNumber();

    return 0;
}
