/*
 The concept of multilevel inheritance is:
 a class can also be derived from one class, which is
 already derived from another class.
 */

#include<iostream>
using namespace std;

//Parent Class

class meClass{
public:
    void meFunction(){
        cout<<"This is an example of multilevel inheritance.\n";
    }
};

//myChildClass derived from meClass
class myChildClass: public meClass{
    
};
//myGrandchildclass derived from myChildClass
class myGrandChildClass: public myChildClass{
    
};
int main()
{
    myGrandChildClass anObject;
    anObject.meFunction();
    return 0;
}
