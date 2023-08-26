// More on C++ Friend Functions (Examples & Explanation)

#include <iostream>
using namespace std;

class Y;

class X
{
    int data;
    friend void add(X, Y);

public:
    void setvalue(int value)
    {
        data = value;
    }
};

class Y
{
    int num;
    friend void add(X, Y);

public:
    void setvalue(int value)
    {
        num = value;
    }
};

void add(X o1, Y o2)
{
    cout << "Summing datas of X and Y objects gives me " << o1.data + o2.num << endl;
}

int main() 
{
    X a1;
    a1.setvalue(3);
    Y b1;
    b1.setvalue(5);

    add(a1,b1);


    return 0;
}