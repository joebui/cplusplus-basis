#ifndef ENGINEER_VEHICLE_H
#define ENGINEER_VEHICLE_H

#include <string>
#include <iostream>

using namespace std;

class Vehicle {
private:
    int numOfWheels = 4;
    string mainColor;

protected:
    int width;
    int height;

public:
    void drive() {
        cout << width << height << endl;
    }

    void stop() {
        cout << width << height << endl;
    }

//    // getter
//    int returnNumOfWheels() {
//        return numOfWheels;
//    }
//
//    // setter
//    void setNum(int value) {
//        numOfWheels = value;
//    }

    int getNumOfWheels() const {
        return numOfWheels;
    }

    void setNumOfWheels(int numOfWheels) {
        Vehicle::numOfWheels = numOfWheels;
    }
};

#endif //ENGINEER_VEHICLE_H
