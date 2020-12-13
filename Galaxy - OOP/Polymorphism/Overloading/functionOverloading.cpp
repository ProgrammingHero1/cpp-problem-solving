#include<iostream>
using namespace std;

class printingData{
   public:
      void print(int i) {
        cout<<"Printing int: "<<i<<endl;
      }
      void print(double  f) {
        cout<<"Printing float: "<<f<<endl;
      }
      void print(char* ch) {
        cout<<"Printing character: "<<ch<<endl;
      }
};

int main(void) {
   printingData pd;

   pd.print(31416);

   pd.print(3.1416);

   pd.print("Learning C++ with Jhankar Mahbub.");

   return 0;
}
