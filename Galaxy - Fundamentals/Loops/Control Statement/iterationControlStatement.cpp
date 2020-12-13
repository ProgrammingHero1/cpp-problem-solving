#include<iostream>
using namespace std;
int main()
{
    int i;
    
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            cout<<i<<" is an even number."<<endl;
        }
        else
        {
             cout<<i<<" is an odd number."<<endl;
        }
    }
    
    return 0;
}
