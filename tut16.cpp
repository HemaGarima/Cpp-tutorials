// Call by Value & Call by Reference in C++

#include<iostream>
using namespace std;

int sum(int a, int b){
    int c=a+b;
    return c;
}
      
// This will not swap a and b
void swap(int a,int b){ // temp a b
    int temp = a;       // 4    4 5
    a = b;              // 4    5 5 
    b = temp;           // 4    5 4
}

// call by reference using pointers
void swapPointer(int* a,int* b){ // temp a b
    int temp = *a;               // 4    4 5
    *a = *b;                     // 4    5 5 
    *b = temp;                   // 4    5 4
}

// call by reference using C++ reference Variables
int & swapReferenceVar(int &a,int &b){
// void swapReferenceVar(int &a,int &b){  // temp a b
    int temp = a;                         // 4    4 5
    a = b;                                // 4    5 5 
    b = temp;                             // 4    5 4
    return a;
}

int main(){
    int x=4,y=5;
    // cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x,y); // This will not swap x and y
    // swapPointer(&x,&y); // This will swap a and b using pointer reference
    // swapReferenceVar(x,y)  ; // This will swap a and b using reference  variables
    swapReferenceVar(x,y) = 766 ; // This will swap a and b using reference  variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;

   return 0;

}