#include<bits/stdc++.h>
using namespace std;

int main()
{
    int numbers[] = {2, 4, 6, 8, 2, 5, 1, 4, 6, 1};
    int sum = 0;
    int len = sizeof(numbers)/sizeof(numbers[0]);

    for(int i = 0; i < len; ++i)
    {
        sum += numbers[i];
    }

    cout<<sum<<endl;

    return 0;
}

