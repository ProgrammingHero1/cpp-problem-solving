#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str1[] = "This is string 1";
    char str2[20];
    char str3[] = "This is a dummy text. Ignore this";

    string s1 = "Hello", s2 = "world";

    strcpy(str2, str1);

    cout<<str2<<endl;

    cout<<strlen(str1)<<endl;

    if(strcmp(str1, str3))
    {
        cout<<"String-1 is smaller"<<endl;
    }
    else
    {
        cout<<"String-3 is bigger"<<endl;
    }

    cout<<s1+" "+s2<<endl;

    return 0;
}

