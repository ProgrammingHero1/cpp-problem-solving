#include<bits/stdc++.h>
using namespace std;

int main()
{
    int random, rangeRand, lowerBound, upperBound;
    srand (time(NULL));

    random = rand();

    cout<<random<<endl;

    cout<<"Lower value: ";
    cin>>lowerBound;

    cout<<"Upper value: ";
    cin>>upperBound;

    rangeRand = rand() % (upperBound - lowerBound + 1) + lowerBound;

    cout<<rangeRand<<endl;

    return 0;
}
