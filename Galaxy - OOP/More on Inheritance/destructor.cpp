#include <iostream>
using namespace std;
class Sentence{
   public:
      void setLength(double len);
      double getLength( void );
      Sentence();
      ~Sentence();

   private:
      double length;
};

// Member functions definitions. Construction too.
Sentence::Sentence(void) {
   cout<<"Object is created."<<endl;
}
Sentence::~Sentence(void) {
   cout<<"Object is deleted."<<endl;
}
void Sentence::setLength( double len ) {
   length = len;
}
double Sentence::getLength( void ) {
   return length;
}

int main() {
   Sentence sentence;

   sentence.setLength(10.0);
   cout<<"Sentence's length is : "<< sentence.getLength()<<endl;

   return 0;
}
