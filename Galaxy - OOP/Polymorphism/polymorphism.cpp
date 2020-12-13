#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
    void animalSound()
    {
        cout<<"Every animal makes different sound.\n";
    }
};

class Horse: public Animal{
public:
    void animalSound(){
        cout<<"The Horse sounds like: Chihihihi.\n";
    }
};

class Dog: public Animal{
public:
    void animalSound(){
        cout<<"The Dog sounds like: Vau Vau."<<endl;
    }
};

class Cat: public Animal{
public:
    void animalSound(){
        cout<<"The Cat sounds like: Meaw Meaw."<<endl;
    }
};
int main()
{
    Animal petAnimal;
    Horse myHorse;
    Dog myDog;
    Cat myCat;

    petAnimal.animalSound();
    myHorse.animalSound();
    myDog.animalSound();
    myCat.animalSound();

    return 0;

}
