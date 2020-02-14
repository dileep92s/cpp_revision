#include <iostream>
#include <string>
// #include "std_types.h"

using namespace std;


class Animal
{
    // everything is private by defualt
    uint8_t age;
    string name;

    // access specifier
    public:
        // parameterized constructor with initializer list
        Animal(string name, uint8_t age):age(age),name(name)
        {

        }

        // default constructor
        Animal()
        {
            name = "None";
            age = 0;
        }

        // copy constructor
        Animal(Animal &ref)
        {
            name = ref.name;
            age = ref.age;
        }

        void printInfo()
        {
            std::cout << "Name : " << name << std::endl;
            std::cout << "Age : " <<  int(age) << std::endl;

        }
};

int main()
{
    Animal ani_1("ani_1", 1);   // parameterized
    Animal ani_2;               // default
    Animal ani_3 = {"ani_3", 3};    // initializer 
    Animal ani_4(ani_1);        // copy
    
    ani_1.printInfo();
    ani_2.printInfo();
    ani_3.printInfo();
    ani_4.printInfo();

    return 0;
}
