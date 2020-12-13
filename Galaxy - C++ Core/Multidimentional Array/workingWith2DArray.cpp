#include<bits/stdc++.h>
using namespace std;

//Show the summation of every column of a given square matrix

int main()
{
    int array[3][3];
    int sum[3] = {0};

    for(int i=0; i<3; ++i) {
        for(int j=0; j<3; ++j) {
            cin>>array[i][j];
        }
    }

    for(int i=0; i<3; ++i) {
        for(int j=0; j<3; ++j) {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    // summation process
    for(int j=0; j<3; ++j) {
        sum[j] = 0;
        for (int i=0; i<3; ++i) {
            sum[j] += array[i][j];
        }
    }

    for(int i=0; i<3; ++i) {
        cout<<sum[i]<<" ";
    }

    return 0;
}
