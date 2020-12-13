#include<iostream>
using namespace std;
int main()

{
   //Before getting straight into sizeof() let us run something first
    
    int n;
    float f;
    double d;
    char ch;
    long long int lld;
    
    cout<<sizeof(n)<<endl;
    cout<<sizeof(f)<<endl;
    cout<<sizeof(d)<<endl;
    cout<<sizeof(ch)<<endl;
    cout<<sizeof(lld)<<endl;
    
    //if you run this program, the output will be the following:
    /*
     4
     4
     8
     1
     8
     */
    //These numbers are the size of those operand/variable in "byte"
    
    return 0;
}
