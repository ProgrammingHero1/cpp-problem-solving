#include<iostream>
using namespace std;
int main()

{
    int number;
    cout<<"Please enter an integer number: ";
    cin>>number;
    if(number>0)
    {
        cout<<"\nThis is a positive number.";
    }
    else if(number<0)
    {
        cout<<"\nThis is a negative number.";
    }
    else
    {
        cout<<"\nThe number you have entered is 0 (zero).";
    }
    
    return 0;
    
}
