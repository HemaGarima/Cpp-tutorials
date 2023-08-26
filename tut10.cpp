// For , While and do - while loops in C++

#include <iostream>
using namespace std;

int main()
{
    /*LOOPS STRUCTURE IN C++.
    There are three types of loops in C++.
    1. For loops
    2. While loops
    3. Do-While loops
    */

    /*FOR LOOPS IN C++.*/
    // int i = 1;
    // cout<<i<<endl;
    // i++;
    //  cout<<i<<endl;
    // i++;
    //  cout<<i<<endl;
    // i++;
    //  cout<<i<<endl;
    // i++;
    //  cout<<i<<endl;
    // i++;

    //  SYNTAX FOR FOR LOOP
    // for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }

    // for(int i=0; i<=40; i++)
    // {
    //     cout<<i<<endl;
    // }

    // EXAMPLE OF INFINITE FOR LOOP
    // for(int i=0; 34<40; i++)
    // {
    //     cout<<i<<endl;
    // }

    /*WHILE LOOP IN C++*/
    // syntax for while loop in C++
    // while(condition)
    // {
    //     C++ statements;
    //     updation;
    // }

    // printing 1 to 40 using while loop
    // int i = 1;
    // while(i<=40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // EXAMPLE OF INFINITE WHILE LOOP
    // int i=1;
    // while(true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    // DO WHILE LOOP IN C++
    // syntax for do while loop in C++
    // do
    // {
    //     C++ statements;
    //     updation;
    // }while(condition);

    // Printing 1 to 40 using do while loop in C++
    int i = 1;
    do
    {
    cout<<i<<endl;
    i++;
    }while(false);

    // question -->write a multiplication table of six using loop

    return 0;
}