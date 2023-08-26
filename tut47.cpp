// Solution to Exercise on Cpp Inheritance

#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    int a,b;
    public:
    void getdatad(){
        cout<<"Enter the value of number a . "<<endl;
        cin>>a;
        cout<<"Enter the value of number b . "<<endl;
        cin>>b;
    }
    void Performoperationsd();
};

void SimpleCalculator :: Performoperationsd(){
    cout<<"The sum of a and b is "<<(a+b)<<endl;
    cout<<"The subtraction of a and b is "<<(a-b)<<endl;
    cout<<"The division of a and b is "<<(a/b)<<endl;
    cout<<"The multiplication of a and b is "<<(a*b)<<endl;
}

class ScientificCalculator{
    int c,d;
    public:
    void getdatae(){
        cout<<"Enter the value of number 1. "<<endl;
        cin>>c;
        cout<<"Enter the value of number 2. "<<endl;
        cin>>d;
    }
    void Performoperationse(){
        cout<<"The value of cos(c) is "<<cos(c)<<endl;
        cout<<"The value of sin(c) is "<<sin(c)<<endl;
        cout<<"The value of exp(c) is "<<exp(c)<<endl;
        cout<<"The value of tan(c) is "<<tan(c)<<endl;
    }
};

class HybridCalculator : public SimpleCalculator , public ScientificCalculator{

};


int main(){
    // SimpleCalculator Phone;
    // Phone.getdatad();
    // Phone.Performoperationsd();
    // ScientificCalculator idea;
    // idea.getdatae();
    // idea.Performoperationse();
    HybridCalculator Boot;
    Boot.getdatad();
    Boot.Performoperationsd();
    Boot.getdatae();
    Boot.Performoperationse();
    return 0;
}