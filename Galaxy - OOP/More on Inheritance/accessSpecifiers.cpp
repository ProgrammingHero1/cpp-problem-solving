#include<iostream>
using namespace std;

class MeClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};

int main() {
  MeClass anObject;
  anObject.x=79;  // This is allowed because x is public
  anObject.y=89;  // This is not allowed because y is private
    
  return 0;
}
