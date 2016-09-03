//
// Created by Bui Quang Dien on 8/20/16.
//

#ifndef ENGINEER_CLASS1_H
#define ENGINEER_CLASS1_H

#include <iostream>

#include "Class2.h"

using namespace std;

class Class1 : Class2 {
public:
    virtual void func1() {
        cout << "func1" << endl;
    }

    virtual void func2() {
        cout << "func2" << endl;
    }
};

#endif //ENGINEER_CLASS1_H
