//
// Created by Bui Quang Dien on 9/10/16.
//

#ifndef ENGINEER_DESTRUCTOR_H
#define ENGINEER_DESTRUCTOR_H

#include <iostream>

using namespace std;

class Destructor {
public:
    const static int staticVariable = 0;

    int *value = new int;

    Destructor(int times) {
        cout << "Calling constructor" << endl;
        *value = times;
    }

    ~Destructor() {
        delete value;
        cout << "Destructor called" << endl;
    }

    void print() {
        for (int i = 0; i < *value; ++i) {
            cout << "Hello Coc Map :D" << endl;
        }
    }


};

#endif //ENGINEER_DESTRUCTOR_H
