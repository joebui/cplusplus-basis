#include <iostream>
#include <vector>
#include "Classes/Vehicle.h"
#include "Classes/Truck.h"
#include "Classes/Class1.h"
#include "poly/Shape.h"
#include "poly/Circle.h"
#include "poly/Square.h"

using namespace std;
using namespace poly;

void func1(int i) {
//    int a = 111;
    i = 1;
}

void func2(int *i) {
    *i = 2;
}

void func3(int &i) {
    i = 3;
}

int main() {
//    int i;
//    auto bbb = "fhjsdfh";
//
//    cout << "Enter a number: ";
//    cin >> i;
//    if (cin.fail()) {
//        cout << "Problem!" << endl;
//    } else {
//        cout << "Hello, World! " << i << endl;
//    }
//    int x = 4;
//    float y {4.9};
//    cout << x << " " << y << endl;
//
//    string name {"Denis"};
//    cout << name << endl;
//
//    cout << endl;
//    cout << "Print vector" << endl;
//
//
//    vector<int> v {3, 5, 7, 1, 3};
//    for (int j = 0; j < v.size(); ++j) {
//        cout << v[j] << "\t";
//    }
//
//    cout << endl;
//
//    v.push_back(45);
//    for (auto j : v) {
//        cout << j << "\t";
//    }
//
//    auto s = "fjlsdkf";
//
//    int value;
//
//    cout << "\nEnter a number: ";
//    cin >> value;
//    switch (value) {
//        case 12:
//            cout << "IS 12" << endl;
//            break;
//        default:
//            cout << "IS NOT 12" << endl;
//            break;
//    }
//    cout << endl;
//
//    cout << endl;
//    cout << "Print function values" << endl;
//
//
//    int i1 {3};
//    int i2 {7};
//    int i3 {9};
//
//    cout << i1 << " " << i2 << " " << i3 << endl;
//    func1(i1);
//    func2(&i2);
//    func3(i3);
//    cout << i1 << " " << i2 << " " << i3 << endl;

//    int values[10][10];
//
//    values[0][0] = 8;
//
//    cout << "Array values" << endl;
//    cout << values[0][0] << endl;

//    Vehicle vehicle;
//    cout << vehicle.numOfWheels << endl;
//    vehicle.setNum(888);
//    cout << vehicle.returnNumOfWheels() << endl;
//
//    Vehicle v1;
//    v1.setNum(9);
//    cout << v1.returnNumOfWheels() << endl;

//    Truck truck;
//
//    Truck truck1 {45, 56};
//    truck1.abc();

    /**
     * Polymorphism and namespace
     */
    Shape *circle;
    circle = new Circle(20, 20);
//    poly::Shape *circle = new poly::Circle(20, 20);
    circle->display();

    Shape *square;
    square = new Square(50, 50);
    square->display();

    return 0;
}