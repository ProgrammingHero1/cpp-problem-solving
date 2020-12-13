#include<bits/stdc++.h>

using namespace std;

class A{
public:
    A() {
        cout<<"This is class-A"<<endl;
    }
};

class B: public virtual A{
public:
    B() {
        cout<<"This is class-B"<<endl;
    }
};

class C: public virtual A{
public:
    C() {
        cout<<"This is class-C"<<endl;
    }
};

class D: public B, public C{
public:
    D() {
        cout<<"This is class-D"<<endl;
    }
};

int main() {
    D d;

    return 0;
}
