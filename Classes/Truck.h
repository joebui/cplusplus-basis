//
// Created by Bui Quang Dien on 8/2/16.
//

#ifndef ENGINEER_TRUCK_H
#define ENGINEER_TRUCK_H

#include "Vehicle.h"

class Truck : Vehicle {
public:
    Truck() {
        cout << "aaa" << endl;
    }

    Truck(int width, int height) {
        this->width = width;
        this->height = height;
        cout << "this is truck" << endl;
    }

    void abc() {
        cout << width << " " << height << endl;
    }
};

#endif //ENGINEER_TRUCK_H
