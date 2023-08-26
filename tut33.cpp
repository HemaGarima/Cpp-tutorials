// Dynamic Initialization of Objects Using Constructors

#include <iostream>
using namespace std;

class Bankdeposit
{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

public:
    Bankdeposit() {}
    Bankdeposit(int p, int y, float r); // r can be a value like 0.04
    Bankdeposit(int p, int y, int r);   // r can be a value like 4.
    void show();
};

Bankdeposit ::Bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

Bankdeposit ::Bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

void Bankdeposit ::show()
{
    cout << "Principal amount was " << principal << " . Returnvalue after " << years 
    << " years is " << returnvalue << " . " << endl;
     
}

int main()
{
    Bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p,y and r . " << endl;
    cin >> p >> y >> r;
    bd1 = Bankdeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of p,y and R . " << endl;
    cin >> p >> y >> R;
    bd2 = Bankdeposit(p, y, R);
    bd2.show();

    return 0;
}