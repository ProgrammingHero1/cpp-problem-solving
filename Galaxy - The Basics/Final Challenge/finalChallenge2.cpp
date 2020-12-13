#include<iostream>
using namespace std;
int x=10;
void test()
{
    cout<<"The value of x is : "<<x<<endl;
}
int main()
{
    test();//why the value of x is 10 when the test() function is called?
    x=20; //What would happen if we assign 20 to x before test() function is called and why?
    cout<<"Value of x is: "<<x<<endl;
    return 0;
}
