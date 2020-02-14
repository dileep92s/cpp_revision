#include "class_2.h"
#include <iostream>
#include <string>

using namespace std;

Car::Car():make_u32(2020)
{
    cout << "Car Constructor" << endl;
}

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