#include<iostream>
using namespace std;

class complexNumber {
private:
    int real, imaginary;
public:
    complexNumber(int r=0, int i=0)
    {
        real=r;
        imaginary=i;

    }

    complexNumber operator + (complexNumber const &object) {
        complexNumber res;
        res.real=real+object.real;
        res.imaginary=imaginary+object.imaginary;
        return res;
    }
    void print()
    {
        cout<<real<<"+"<<imaginary<<"i"<<endl;

    }
};

int main()
{
    complexNumber c1(10,5);
    complexNumber c2(2,4);
    complexNumber c3=c1+c2;
    c3.print();
}
