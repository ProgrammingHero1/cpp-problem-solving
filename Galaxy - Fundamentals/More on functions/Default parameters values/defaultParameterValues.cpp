#include<iostream>
using namespace std;
int sum(int x, int y, int z=0, int a=0)
{
    return (x+y+z+a);
}
int main()
{
    cout<<sum(20,35)<<endl;
    cout<<sum(20,35,45)<<endl;
    cout<<sum(20,35,45,55)<<endl;
}
