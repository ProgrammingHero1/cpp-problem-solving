/*
 The main concept is:
 A class can also be derived from more than one
 base class.
 */

#include<iostream>
using namespace std;

//Base Class
class meClass{
public:
    void meFunction(){
        cout<<"This is an example of multiple inheritance\n";
    }
};

//Another base class
class MeAnotherClass{
public:
    void meAnotherFunction(){
        cout<<"Press F for respect.\n";
    }
};

//Now its a derived class

class myChildClass: public meClass, public MeAnotherClass{
    
};
int main()
{
    myChildClass anObject;
    anObject.meFunction();
    anObject.meAnotherFunction();
    return 0;
}
