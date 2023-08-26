// Map in C++ STL

#include<iostream>
#include<string>
#include<map>
using namespace std;

// Map is an associative array

int main(){
    map<string , int > marksMap;
    marksMap["Harry"] = 98;
    marksMap["Jack"] = 59;
    marksMap["Rohan"] = 2;

    marksMap.insert({{"Kozume", 169}, {"Kuroo", 187}});
    marksMap.insert(make_pair("Hema" , 24));

    map<string , int > :: iterator itr;
    for(itr = marksMap.begin() ; itr != marksMap.end() ; itr++ ){
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }
    cout<<"The size is : "<<marksMap.size()<<endl;
    cout<<"The max size is : "<<marksMap.max_size()<<endl;
    cout<<"The return value of empty is : "<<marksMap.empty()<<endl;
    
    return 0;
}