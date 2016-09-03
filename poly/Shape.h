//
// Created by Bui Quang Dien on 8/26/16.
//

#ifndef ENGINEER_SHAPE_H
#define ENGINEER_SHAPE_H

#include <iostream>

using namespace std;

namespace poly {
    class Shape {
    protected:
        int width;
        int height;

    public:
        Shape() {}

        Shape(int w, int h) {
            width = w;
            height = h;
        }

        virtual void display() {
            cout << width << " " << height << endl;
        }
    };
}

#endif //ENGINEER_SHAPE_H
