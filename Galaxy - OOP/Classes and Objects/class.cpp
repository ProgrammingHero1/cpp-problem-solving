#include<iostream>
using namespace std;

class Customer{
public:
    int id;
    string name;
};
int main()
{
    Customer c1;
    c1.id=201;
    c1.name="Thomas Adison";

    cout<<"ID of the first customer is: "<<c1.id<<endl;
    cout<<"Name of the first customer is: "<<c1.name<<endl;

    return 0;
}
