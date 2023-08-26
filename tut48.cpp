// Code Example : Constructors in Derived Class in Cpp

#include<iostream>
using namespace std;

/*
Case 1:
class B : public A{
    // Order of execution -> first A() then B()
};

Case 2:
class A : public B , public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A : public B , virtual public C {
    // Order of execution of constructor -> C() then B() and A()
};

*/

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class Constructor called . "<<endl;
        }
        void printdataBase1(void){
            cout<<"The value of data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 class Constructor is called . "<<endl;
        }
        void printdataBase2(){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};

class Derived : public Base1 , public Base2{
    int derived1 , derived2 ;
    public:
        Derived(int a,int b,int c,int d) : Base2(b) , Base1(a){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class Constructor called . "<<endl;
        }
        void printdataDerived(){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};

int main(){
    Derived Harry(1,2,3,4);
    Harry.printdataDerived();
    Harry.printdataBase1();
    Harry.printdataBase2();
    return 0;
}