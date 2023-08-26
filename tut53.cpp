// this Pointer in C++

#include<iostream>
using namespace std;

class A{
    int a;
    public:
        A & setData(int a)
        // void setData(int a)
        {
            this->a = a;
            return *this;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    // this is a keyword which points to the object which invokes the member function.
    A b;
    b.setData(4).getData();
    // b.setData(4);
    // b.getData();
    return 0;
}