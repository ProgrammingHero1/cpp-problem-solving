#include<bits/stdc++.h>

using namespace std;

// constructor without parameters
class Car {
public:
    Car() {
        this->numberOfSit = 4;
        cout<<"A car has been created"<<endl;
    }

    void setNumberOfSit(int numberOfSit) {
        this->numberOfSit = numberOfSit;
    }

    int getNumberOfSit() {
        return this->numberOfSit;
    }


private:
    int numberOfSit;
};


// constructor with parameters
class Department {
public:
    Department(string deptName, int numberOfStudent) {
        this->deptName = deptName;
        this->numberOfStudent = numberOfStudent;
    }

    string getDeptName() {
        return this->deptName;
    }

    int getNumberOfStudent() {
        return this->numberOfStudent;
    }

private:
    int numberOfStudent;
    string deptName;
};

int main() {
    Car myCar;
    cout<<myCar.getNumberOfSit()<<endl;
    myCar.setNumberOfSit(10);
    cout<<myCar.getNumberOfSit()<<endl;

    Department dept("Computer Science", 300);
    cout<<"Name of the dept: "<<dept.getDeptName()<<endl;
    cout<<"Number of students: "<<dept.getNumberOfStudent()<<endl;

    return 0;
}

