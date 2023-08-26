// Function Objects (Functors) in C++ STL

#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // Function Objects (Functors) : Function wrapped in a class so that it is available like an object.
    int arr[] = {1 , 3, 4, 0 , 54, 9};
    // sort(arr , arr+5);
    sort(arr , arr+6 , greater<int>()); // greater<int>() is an object
    for(int i = 0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}