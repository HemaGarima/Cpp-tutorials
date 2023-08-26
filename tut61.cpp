// File I/O in C++ : Read/Write in the Same Program & closing Files

#include<iostream>
#include<fstream>

using namespace std;

int main(){
    // // connecting our file with hout stream
    // ofstream hout("Sample60.txt");

    // // Creating a name string and filling it with the string entered by the user
    // string name;
    // cout<<"Enter your name";
    // cin>>name;

    // // Writing a string to the file
    // hout<<"My name is "<<name;

    // hout.close();

    ifstream hin("Sample60.txt");
    string content;
    // hin>>content;
    getline(hin , content);
    cout<<"The content of this file is "<<content<<endl;

    hin.close();

    return 0;
}