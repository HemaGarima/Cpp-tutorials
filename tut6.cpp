// C++ Header files & Operators

// There are two types of header files:
// 1.System header files: It comes with the compiler.
#include<iostream>
// 2.User defines header files: It is written by the programmer.
// #include"this.h"--->this will produce an error if this.h is not present in the current directory.
// *****cpp reference for header files.
using namespace std;
  
int main(){
    int a = 8 , b = 9;
    // cout<<"Operators in C++ ."<<endl;
    // cout<<"Following are the types of operators in C++ ."<<endl;
    
    // Arithmetic operators
    // cout<<"The value of  a+b is :"<<a+b<<endl;
    // cout<<"The value of  a-b is :"<<a-b<<endl;
    // cout<<"The value of  a*b is :"<<a*b<<endl;
    // cout<<"The value of  a/b is :"<<a/b<<endl;
    cout<<"The value of  a%b is :"<<a%b<<endl; // It gives remainder.
    // cout<<"The value of  a++ is :"<<a++<<endl;
    // cout<<"The value of  ++a is :"<<++a<<endl;
    // cout<<"The value of  a-- is :"<<a--<<endl;
    // cout<<"The value of  --a is :"<<--a<<endl;

    // Assignment operators-->used to assign values to variables.
    // int a =2,b=9;
    // char n = 'h';

    // Comparison operators
    // cout<<"Following are the comparison operators in C++."<<endl;
    // cout<<"The value of a==b is "<<(a==b)<<endl;
    // cout<<"The value of a!=b is "<<(a!=b)<<endl;
    // cout<<"The value of a<b is "<<(a<b)<<endl;
    // cout<<"The value of a>b is "<<(a>b)<<endl;
    // cout<<"The value of a<=b is "<<(a<=b)<<endl;
    // cout<<"The value of a>=b is "<<(a>=b)<<endl;

    // logical operators
    // cout<<"Following are the logical operators in C++."<<endl;
    // cout<<"The value of this logical and operator ((a==b)&&(a<b)) is "<<((a==b)&&(a<b))<<endl;
    // cout<<"The value of this logical or operator ((a!=b)||(a<b)) is "<<((a!=b)||(a<b))<<endl;
    // cout<<"The value of this logical not operator (!(a<b)) is "<<(!(a<b))<<endl;

    return 0;
}