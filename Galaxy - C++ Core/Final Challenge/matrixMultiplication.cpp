#include<bits/stdc++.h>
using namespace std;

int n=3, m=3, l=3;

int main()
{
    int matrix1[n][m] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix2[m][l] = {
        {11, 12, 13},
        {14, 15, 16},
        {17, 18, 19}
    };

    int ans[n][l];

    for(int i=0; i<n; ++i) {
        for(int j=0; j<l; ++j) {
            ans[i][j] = 0;
            for(int k=0; k<m; ++k) {
                ans[i][j] += (matrix1[i][k] * matrix2[k][j]);
            }
        }
    }

    for(int i=0; i<n; ++i) {
        for(int j=0; j<l; ++j) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

