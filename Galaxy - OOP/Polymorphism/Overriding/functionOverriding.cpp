#include<iostream>
using namespace std;
class Animal {
    public:
void shout()
    {
        cout<<"Animal is shouting.\n";
    }
};
class Dog: public Animal
{
 public:
 void eat()
    {
       cout<<"Dog is eating bone.\n";
    }
};

int main()

{
   Dog d = Dog();
   d.eat();
   return 0;
}
