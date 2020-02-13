#include <iostream>
#include <string>

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

        void info()
        {
            std::cout << "Name : " << name << std::endl;
            std::cout << "Age : " <<  int(age) << std::endl;
        }

        void speak()
        {
            std::cout << "speak : None" << std::endl;
        }
};

// default inheritance is private
class Dog1 : public Animal
{
    public:
        // initialize base from derived
        Dog1():Animal("Dog1", 10)
        {

        }
};


class Dog2 : public Animal
{
    public:
        Dog2():Animal("Dog2", 10)
        {

        }

        // function overriding
        void speak()
        {
            std::cout << "speak : i'm a doggy" << std::endl;
        }
};


int main()
{
    Dog1 doggy_1;
    doggy_1.info();
    doggy_1.speak();    // prints base calss speak

    Dog2 doggy_2;
    doggy_2.info();
    doggy_2.speak();    // prints derived calss speak

    return 0;
}
