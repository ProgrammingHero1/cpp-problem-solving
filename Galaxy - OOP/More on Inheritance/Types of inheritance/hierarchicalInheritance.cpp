#include<bits/stdc++.h>

using namespace std;

class Vehicle{

public:
    void setPowerOfEngine(float powerOfEngine) {
        this->powerOfEngine = powerOfEngine;
    }
    float getPowerOfEngine() {
        return this->powerOfEngine;
    }

private:
    float powerOfEngine;

};

class Car: public Vehicle{

public:
    Car() {
        this->numberOfWheel = 4;
    }
    void setNumberOfSit(int numberOfSit) {
        this->numberOfSit = numberOfSit;
    }

    int getNumberOfSit() {
        return this->numberOfSit;
    }

    int getNumberOfWheel() {
        return this->numberOfWheel;
    }


private:
    int numberOfSit;
    int numberOfWheel;

};

class Bike: public Vehicle{

public:
    Bike() {
        this->numberOfWheel = 2;
    }

    void setNumberOfSit(int numberOfSit) {
        this->numberOfSit = numberOfSit;
    }

    int getNumberOfSit() {
        return this->numberOfSit;
    }

    int getNumberOfWheel() {
        return this->numberOfWheel;
    }


private:
    int numberOfSit;
    int numberOfWheel;

};



int main() {
    Car myCar;

    myCar.setPowerOfEngine(70);
    myCar.setNumberOfSit(4);

    cout<<"Power of engine: "<<myCar.getPowerOfEngine()<<endl;
    cout<<"Number of sit: "<<myCar.getNumberOfSit()<<endl;
    cout<<"Number of wheel: "<<myCar.getNumberOfWheel()<<endl;


    Bike myBike;

    myBike.setPowerOfEngine(75);
    myBike.setNumberOfSit(2);

    cout<<"Power of engine: "<<myBike.getPowerOfEngine()<<endl;
    cout<<"Number of sit: "<<myBike.getNumberOfSit()<<endl;
    cout<<"Number of wheel: "<<myBike.getNumberOfWheel()<<endl;


    return 0;
}

