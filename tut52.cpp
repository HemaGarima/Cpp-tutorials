// Array of Objects Using Pointers in C++

#include<iostream>
using namespace std;

class Shopitem{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"The code of this item is "<<id<<endl;
            cout<<"The price of this item is "<<price<<endl;
        } 
};

// 1 2 3
//     ^
//     |
//     |
//     ptr
// ptrTemp

int main(){
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[34];

    // 1. Daal
    // 2. Chawal
    // 3. Aata
    Shopitem *ptr = new Shopitem [size];
    Shopitem *ptrTemp = ptr;
    int p,i;
    float q;
    for (i = 0;i<size ; i++){
        cout<<"Enter id and price of item . "<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p,q);
        ptr->setData(p,q);
        ptr++;
    }

    for (i = 0;i<size ; i++){
        cout<<"Item number : "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }


    return 0;
}