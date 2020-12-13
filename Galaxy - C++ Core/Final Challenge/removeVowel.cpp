#include<bits/stdc++.h>
using namespace std;

int main()
{
    string inp, out="";
    getline(cin, inp);

    for(int i=0; i<inp.size(); ++i) {
        if(inp[i] == 'a' || inp[i]=='A' ||
           inp[i] == 'e' || inp[i]=='E' ||
           inp[i] == 'i' || inp[i]=='I' ||
           inp[i] == 'o' || inp[i]=='O' ||
           inp[i] == 'u' || inp[i]=='U') {
            continue;
           }
           else {
            out += inp[i];
           }
    }

    cout<<out<<endl;

    return 0;
}
