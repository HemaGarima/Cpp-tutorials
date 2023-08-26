// Variable Scope & Data Types in C++

#include<iostream>
using namespace std;
int glo = 47;
void sum(){
    // int glo = 4 ;
    cout<<glo;
}

// Data types in C++ are categorised in three groups:
// 1. Built in
// 2. User defined 
// 3. Derived 

// There are five types of built in data types (variables) in C++.
// 1. int
// 2. float
// 3. char
// 4. double
// 5. boolean

// There are three types of user defined data types in C++.
// 1. Struct
// 2. Union
// 3. Enum

// There are three types of derived data types in C++.
// 1. Array 
// 2. Function  
// 3. Pointer 

// Based on scope , variable can be classified into two types:
// 1. Local Variables
// 2. Global Variables

int main(){
    // int a = 15;
    // int b = 18;
    int a = 84 , b = 8;
    float pi = 3.14;
    char thie = 'e';
    bool gargi = true;
    int glo = 1;
    glo = 89;
    // cout<<"This is tutorial 4 . \nHere the value of a is "<<a<<" .\nThe value of b is "<<b ;
    // cout<<" . \nHere the value of pi is "<<pi;
    // cout<<" . \nHere the value of thie is "<<thie;
    sum();
    cout<<glo<<gargi;

    return 0;
}

// RULES TO DECALRE VARIABLES IN C++. 
// 1. Variable names in C++ can range from 1 to 255 characters. 
// 2. All variable names must begin with a letter of the alphabet or an underscore(_).
// 3. After the first initial letter , variable names can also contain letters and numbers. 
// 4. Variable names are case sensitive. 
// 5. No spaces or special characters are allowed.
// 6. You cannot use a C++ keyword (a reserve keyword) as a variable name. 
