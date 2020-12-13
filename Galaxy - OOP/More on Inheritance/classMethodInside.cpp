#include<iostream>
using namespace std;

class MeClass{         // This is the class
  public:               // Access specifier
    void meMethod() {   // Method or function
      cout<<"Hello Heaven!\n";
    }
};

int main() {
  MeClass anObject;     // Creating an object of MeClass
  anObject.meMethod();  // Calling the method
  return 0;
}
