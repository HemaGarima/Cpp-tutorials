// Constructors in C++

#include<iostream>
using namespace std;

class Complex{
    int a,b;
    public:
    // Creating a Constructor.
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class.
    // It is automatically invoked whenever an object is created.

    Complex(void); // Constructor declaration .

    void printnumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }

};

Complex :: Complex(void) // ----> This is a default constructor as it accepts no parameter.
{
    a = 10;
    b = 78;
    cout<<"Hello World. "<<endl;
}

int main(){
    Complex c1,c2,c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();

    return 0;
}


/*
CHARACTERISTICS OF CONSTRUCTORS
1. It should be declared in the public section of the class. 
2. They are automatically invoked whenever the object is created.
3. They cannot return values and do not have return types . 
4. It can have default arguments . 
5. We cannot refer to their address .
*/