// Revisiting Pointers : new and delete Keywords in Cpp

#include<iostream>
using namespace std;

int main(){
    // Basic Example
    // int a = 4;
    // int* ptr = &a;
    int* ptr = new int(4);
    // *(ptr) = 999;
    cout<<"The value of a is "<<*(ptr)<<endl;

    // New operator
    // int *p = new int(40);
    float *p = new float(40.78);
    cout<<"The value at address p is "<<*(p)<<endl;

    int *arr = new int[3];
    arr[0] = 10;
    // arr[1] = 20;
    *(arr+1) = 20;
    arr[2] = 30;
    // delete[] arr;
    for(int i = 0;i<3;i++){
        cout<<"The value of arr ["<<i<<"] is "<<arr[i]<<endl;
    }

    // delete operator


    return 0;
}