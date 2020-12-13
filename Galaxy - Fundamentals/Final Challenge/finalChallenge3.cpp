#include<iostream>
using namespace std;
void swap(int x, int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main()
{
    int x=21, y=41;
    swap(x,y);
    cout<<"After swapping: The value of x and y are: "<<x<<" and "<<y<<endl;
    //Oops, there is something wrong. Why the numbers are not being swapped?
    //You don't need to fix the program. Just figure out the answer of "why"
    return 0;
}
