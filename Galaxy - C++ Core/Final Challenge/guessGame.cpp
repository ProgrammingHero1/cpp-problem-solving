#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Welcome to the guess game"<<endl;
    cout<<"Remember, you have only five lives"<<endl;
    int lowerBound, upperBound, guess, counter = 5;
    cout<<"Set the lower bound: ";
    cin>>lowerBound;
    cout<<"Set the upper bound: ";
    cin>>upperBound;

    if(lowerBound>=upperBound) {
        cout<<"Range is not valid"<<endl;
    }
    else {
        srand (time(NULL));
        while(counter) {
            int rangeRand = rand() % (upperBound - lowerBound + 1) + lowerBound;
            cout<<"Enter your guess(life-"<<counter<<"): ";
            cin>>guess;
            if(rangeRand == guess) {
                cout<<"You won the game"<<endl;
                break;
            }
            else {
                --counter;
            }
        }
    }
    return 0;
}

