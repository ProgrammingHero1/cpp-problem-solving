////Find and fix error(s) in the following program

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Please enter a capital letter within (A to J): ";
    cin>>ch;
    
    
    switch (ch) {
        case A:
            cout<<"A for Apple.\n";
            break;
        case B:
            cout<<"B for Ball.\n";
            break;
        case C:
            cout<<"C for Cat.\n";
            break;
        case D:
            cout<<"D for Dog.\n";
            break;
        case E:
            cout<<"E for Elephant.\n";
            break;
        case F:
            cout<<"Press F for respect.\n";
            break;
        case G:
            cout<<"G for Goat.\n";
            break;
        case H:
        cout<<"H for Hen.\n";
            break;
        case I:
            cout<<"I for Ink.\n";
            break;
        case J:
            cout<<"J for Jack Fruit.\n";
            break;
        default:
            cout<<"Invalid Input\n";
            break;
    }
    
    return 0;
}

