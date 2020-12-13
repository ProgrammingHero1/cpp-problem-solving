#include<iostream>
using namespace std;
class Construct
{
public:
    int a, b;
    construct()
    {
        a = 10;
        b = 20;
    }
};

int main()
{
    Construct c;
    cout<<"The value of a is: "<<c.a<<endl;
    cout<<"THe value of b is: "<<c.b<<endl;
    return 0;
}

