#ifndef CLASS_2_H_
#define CLASS_2_H_
#include <string>

class Car
{
    uint32_t make_u32;
    std::string model_str; //error if there is no std:: or using namespace std
    float engine_cc_f;
    float engine_hp_f;

    public:
        // Car():engine_cc_f(1000); // not allowed without { }
        Car();
        void printInfo();
};

#endif