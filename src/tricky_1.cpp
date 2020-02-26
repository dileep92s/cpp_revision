#include <iostream>

using namespace std;

class Base
{
    public:

    Base()
    {
        baseMethod();
    }

    virtual void method()
    {
        cout << "In base : method\n";
    }

    void baseMethod()
    {
        method();
    }

};

class Derived : public Base
{
    public:

    Derived()
    {
        baseMethod();
    }

    virtual void method()
    {
        cout << "In Derived : method\n";
    }
};

int main()
{
    // Base ba;
    Derived d;  // D calls B; inside B(); virtual doesnt work
    Base *b = &d;
    b->baseMethod();
    
    return 0;
}