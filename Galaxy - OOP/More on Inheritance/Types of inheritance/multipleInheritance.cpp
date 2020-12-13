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

class FourWheeler {

    public:
    void setMaxSpeed(int maxSpeed) {
        this->maxSpeed = maxSpeed;
    }
    int getMaxSpeed() {
        return this->maxSpeed;
    }

private:
    int maxSpeed;

};

class Car: public Vehicle, public FourWheeler{

public:
    void setNumberOfSit(int numberOfSit) {
        this->numberOfSit = numberOfSit;
    }

    int getNumberOfSit() {
        return this->numberOfSit;
    }


private:
    int numberOfSit;

};

int main() {
    Car myCar;

    myCar.setPowerOfEngine(70);
    myCar.setMaxSpeed(200);
    myCar.setNumberOfSit(4);

    cout<<"Power of engine: "<<myCar.getPowerOfEngine()<<endl;
    cout<<"Max speed: "<<myCar.getMaxSpeed()<<endl;
    cout<<"Number of sit: "<<myCar.getNumberOfSit()<<endl;

    return 0;
}
