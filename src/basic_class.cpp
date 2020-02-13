#include <iostream>
#include <string>
// #include "std_types.h"

using namespace std;

class Animal
{
    uint8_t age;
    string name;

    public:
        Animal(string name, uint8_t age):age(age),name(name)
        {

        }

        Animal()
        {
            name = "None";
            age = 0;
        }

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
    Animal ani_1("ani_1", 1);
    Animal ani_2;
    Animal ani_3 = {"ani_3", 3};
    Animal ani_4(ani_1);
    
    ani_1.printInfo();
    ani_2.printInfo();
    ani_3.printInfo();
    ani_4.printInfo();

    return 0;
}