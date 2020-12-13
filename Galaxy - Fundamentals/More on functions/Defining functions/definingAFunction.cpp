#include<iostream>
using namespace std;

int multi(int, int); //this line declares a function

int main()
{
    int x=20, y= 30;
    cout<<"The multiplication of 20 and 30 is: "<<multi(x,y)<<endl;
}
//This is how a function can be defined
int multi(int x, int y) // returned_dataType func_name (argument_dataType argument_name1, argument_dataType argument_name1, ... , argument_dataType argument_namen)
{
    int z;
    z=x*y;
    return z;
}
