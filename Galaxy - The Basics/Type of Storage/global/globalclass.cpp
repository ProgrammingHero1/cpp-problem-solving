#include<iostream>
using namespace std;
int num1, num2;
void func1(void);
void func1(void)
{
    num1=10;
    cout<<"The first number of this program is: "<<num1<<endl;
}
int main()
{
    num2=20;
    func1();
    cout<<"The second number of this program is: "<<num2<<endl;
    
    return 0;
}
