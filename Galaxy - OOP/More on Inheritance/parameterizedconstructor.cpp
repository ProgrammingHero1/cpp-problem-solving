#include<iostream>
using namespace std;
class Point
{
private:
    int a, b;

public:
    Point(int a1, int b1)
    {
        a=a1;
        b=b1;
    }

    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
};

int main()
{
    Point p1(39, 79);

    cout<<"p1.a = "<<p1.getA()<<", p1.b = "<<p1.getB()<<endl;

    return 0;
}
