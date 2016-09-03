//
// Created by Bui Quang Dien on 8/26/16.
//

#ifndef ENGINEER_CIRCLE_H
#define ENGINEER_CIRCLE_H

#include "Shape.h"

namespace poly {
    class Circle : public Shape {
    public:
        Circle(int w, int h) {
            width = w;
            height = h;
        }

        void display() {
            cout << "the width and height of circle is: " << width << " " << height << endl;
        }
    };
}

#endif //ENGINEER_CIRCLE_H
