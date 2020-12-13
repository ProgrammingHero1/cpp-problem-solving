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

class FourWheeler: public Vehicle {

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

int main() {
    FourWheeler myCar;

    myCar.setPowerOfEngine(70);
    myCar.setMaxSpeed(200);

    cout<<"Power of engine: "<<myCar.getPowerOfEngine()<<endl;
    cout<<"Max speed: "<<myCar.getMaxSpeed()<<endl;

    return 0;
}
