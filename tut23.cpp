// C++ Objects Memory Allocation & using Arrays in Classes

#include <iostream>
using namespace std;

class Shop
{
    int itemid[100];
    int itemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no. " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter Price of your item. " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id. " << itemid[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan ;
    dukaan.initcounter();
    // you can call them inside the loop also.
    dukaan.setPrice();
    dukaan.displayPrice();
    // dukaan.setPrice();
    // dukaan.setPrice();
    // dukaan.displayPrice();
    return 0;
}