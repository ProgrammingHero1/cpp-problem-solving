#include <iostream>
using namespace std;
void demo_func()
{
    // static variable
    static int count=1;
    cout<<count<<"\n";
      
    //value of count will be updated in the next function call
    count=count+2;
}
  
int main()
{
    int i;
    for (i=1;i<=10;i++)
    {
        demo_func();
    }
        
    return 0;
}
