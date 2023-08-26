// Static Data Members & Methods in C++ OOPs

#include <iostream>
using namespace std;

class Employee
{ 
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getcount(void){
        // cout<<id; // Throws an error.
        cout<<"The value of count is "<<count<<endl;
    }
};

// count is the static data member of class Employee.
int Employee :: count; // default value is 0.
// int Employee :: count = 1000;

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count = 1; // cannot do this as id and count are private.
    harry.setdata();
    harry.getdata();
    Employee :: getcount();

    rohan.setdata();
    rohan.getdata();
    Employee :: getcount();

    lovish.setdata();
    lovish.getdata();
    Employee :: getcount();

    return 0;
}