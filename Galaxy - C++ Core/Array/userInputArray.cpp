#include<bits/stdc++.h>
using namespace std;

int main()
{
    int len;

    cout<<"Array length: ";
    cin>>len;
    int numbers[len];

    for(int i = 0; i < len; ++i)
    {
        cin>>numbers[i];
    }

    for(int i = 0; i < len; ++i)
    {
        cout<<numbers[i]<<endl;
    }

    return 0;
}


