// C++ Basic Input/Output and More

#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    // << is called insertion operator.
    // >> is called extraction operator.
    cout<<"Enter the value of number 1 :"<<endl;
    cin>>num1;

    cout<<"Enter the value of number 2 :"<<endl;
    cin>>num2;
    int sum ;
    sum = num1 +num2;

    cout<<"The sum is : "<<sum;
    return 0;
}