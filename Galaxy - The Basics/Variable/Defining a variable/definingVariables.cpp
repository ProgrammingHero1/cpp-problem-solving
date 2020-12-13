#include<iostream>
using namespace std;
int main()
{
    /*Defining a variable means telling the compiler that
     where and how much storage to create for the variable.
     And, assigning a value to it.
     If we skip the "assigning a value" part, we can call it variable declaration.
     But, most of the time, variable definition and declaration happens together.*/
    
    //This is how to define and declare a variable or list of variables
    int a=10,b=20,c=30; // data_type variable_list;
    
    /*On an interesting note, the following line is both
     variable declaration and definition too. You have to
     print the value of x, y, z to understand why.*/
    char x,y,z;
    cout<<x<<"\n";
    cout<<y<<"\n";
    cout<<z<<"\n";
    return 0;
}
