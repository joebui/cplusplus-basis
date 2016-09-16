//
// Created by Bui Quang Dien on 9/9/16.
//

#ifndef ENGINEER_DYNAMIC_H
#define ENGINEER_DYNAMIC_H

#include <iostream>

using namespace std;

class Dynamic {
public:
    void checkNullPointer() {
        double *value = NULL;

        if (value == nullptr) {
            cout << "Null pointer" << endl;
            value = new double;
            *value = 1.4324;
            cout << *value << endl;
        } else {
            cout << "Not Null pointer" << endl;
            *value = 1.4324;
            cout << *value << endl;
        }

        // Free up memory
        delete value;
    }
};

#endif //ENGINEER_DYNAMIC_H
