#include <iostream>
#include <vector>
#include <thread>         // std::thread
#include <zconf.h>
#include "Classes/Vehicle.h"
#include "Classes/Truck.h"
#include "Classes/Class1.h"
#include "poly/Shape.h"
#include "poly/Circle.h"
#include "poly/Square.h"
#include "advanced/dynamic.h"
#include "advanced/destructor.h"
#include "advanced/FileIO.h"
#include "advanced/DBAcess.h"
#include <chrono>
#include <time.h>

using namespace std;
using namespace poly;

/**
 * Define pre-processor
 */
#define PRE_VALUE 10

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

static bool value = true;

void foo() {
    cout << "press enter: ";
    cin >> value;
    value = false;
}

void bar(int x) {
    int a = 0;
    while(value) {
        a++;
        std::this_thread::sleep_for(std::chrono::milliseconds(x));
    }

    cout << "final value: " << a << endl;
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
//    cout << AAA << endl;
//    Shape *circle;
//    circle = new Circle(20, 20);
//    circle->display();
//    Shape* square = new Square(20, 20);

    /**
     * Typecasting
     */
//    double num1 = 156.6;
//    int num2 = (int) num1;
//    cout << num2 << endl;
//
//    int num3 = 156;
//    double num4 = (double) num1;
//    cout << num2 << endl;

    /**
     * Dynamic allocation
     */
//    Dynamic dynamic;
//    dynamic.checkNullPointer();
//
//    Destructor *destructor = new Destructor(PRE_VALUE);
//    destructor->print();
//
//    delete destructor;
//
//    cout << "Second call" << endl;
//    destructor = new Destructor(5);
//    destructor->print();
//
//    delete destructor;

    /**
     * File IO
     */
//    FileIO fileIO;
//    fileIO.write();
//    fileIO.read();

    /**
     * Database access
     */
//    DBAccess dbAccess;
//    dbAccess.select();
//    cout << endl;
//    dbAccess.insert();
//    cout << "Done insert" << endl;
//    dbAccess.select();
//    cout << "Done select 2" << endl;

    /**
     * Threading and timer
     */
//    std::thread first (foo);     // spawn new thread that calls foo()
//    std::thread second (bar,1000);  // spawn new thread that calls bar(0)
//
//    printf("main, foo and bar now execute concurrently...\n");
//
//    // synchronize threads:
//    first.join();                // pauses until first finishes
//    second.join();               // pauses until second finishes

    return 0;
}