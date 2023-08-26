// Inheritance Syntax & Visibility Mode in C++

// Derived class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     class members/methods/ etc....
// }
// NOTES:
// 1. Default visibility mode is private.
// 2. Private visibility mode : public members of the base class becomes private members of the derived class.
// 3. Public visibility mode : public members of the base class remains public members of the derived class.
// 4. Private members are never inherited.

#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Creating a programmer class derived from Employee Base class.
class programmer : public Employee
{
public:
    int languagecode;
    programmer(int inpId)
    {
        id = inpId;
        languagecode = 9;
    }

    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    cout<<harry.id<<endl;
    cout<<rohan.id<<endl;
    programmer skillF(10);
    cout << skillF.languagecode << endl;
    cout << skillF.id << endl;
    skillF.getdata();

    return 0;
}