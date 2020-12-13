#include<iostream>
using namespace std;
class MeClass {
  public:
    void meMethod();
};

void MeClass::meMethod() {
  cout<<"Hello Heaven again.!\n";
}

int main()
{
  MeClass anObject;
  anObject.meMethod();

  return 0;
}
