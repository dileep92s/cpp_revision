#include "class_2.h"
#include <iostream>
#include <string>

using namespace std;

// declaration in hpp but definition in cpp
Car::Car():make_u32(2020)
{
    cout << "Car Constructor" << endl;
}

// classname becomes like namespace
void Car::printInfo()
{
    cout << "make : " << make_u32 << endl;
}

int main()
{
    Car car_1;
    string x;
    car_1.printInfo();

    return 0;
}