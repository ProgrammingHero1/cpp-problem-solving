/*
 Encapsulation makes sure "sensitive" datas are hidden from users.
 And, for others to read or modify the value of a private member,
 providing public get and set method is the thing to do.
 */

#include<iostream>
using namespace std;
class Customer{
private:
    int discount;
public:
    void setDiscount(int x){
        discount=x;
    }
    int getDiscount()
    {
        return discount;
    }
};
int main()
{
    Customer c1;
    c1.setDiscount(15);
    cout<<"Discount of the first customer is: "<<c1.getDiscount()<<" percent.\n";
    return 0;
}
