// Structures , Unions & Enums in C++

#include <iostream>
using namespace std;

// struct employee
// {
//     int eid;
//     char favchar;
//     float salary;
// };

typedef struct employee
{
    /* data */
    int eid;      // 4
    char favchar; // 1
    float salary; // 4
} ep;

union money
{
    int rice;
    char car;
    float pounds;
};

enum Meal
{
   breakfast,
    lunch,
    dinner
};

int main()
{
    // struct employee harry;
    ep harry;
    // struct employee shubham;
    // struct employee rohandas;
    harry.eid = 1;
    harry.favchar = 's';
    harry.salary = 120000000;
    cout << "The value is " << harry.eid << endl;
    cout << "The value is " << harry.salary << endl;
    cout << "The value is " << harry.favchar << endl;

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // cout<<m1.car<<endl;

    
    // enum Meal m1 = lunch;
    Meal m1 = lunch;
    cout << (m1 == 1);

    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;

    return 0;
}