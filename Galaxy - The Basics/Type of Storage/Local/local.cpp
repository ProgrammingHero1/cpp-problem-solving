#include<iostream>
using namespace std;
void test();
void test()
{
    int num1; //local variable to test() function
             //That means this variable is not accessible outside test() function
    num1=9;
    cout<<"num";
}
int main()
{
    int num=6;
    test();
    num1=11; //You will get an error while assinging value to num1 variable inside main         //function
    return 0;
}
