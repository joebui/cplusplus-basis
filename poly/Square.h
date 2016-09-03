//
// Created by Bui Quang Dien on 8/26/16.
//

#ifndef ENGINEER_SQUARE_H
#define ENGINEER_SQUARE_H

#include "Shape.h"

namespace poly {
    class Square : public Shape {
    public:
        Square(int w, int h) {
            width = w;
            height = h;
        }

        void display() {
            cout << "the width and height of square is: " << width << " " << height << endl;
        }
    };
}

#endif //ENGINEER_SQUARE_H
