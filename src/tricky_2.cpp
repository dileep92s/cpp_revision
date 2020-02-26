#include <iostream>

using namespace std;

class Base
{
    public:

    virtual ~Base()
    {
        cout << "In base\n";
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

    ~Derived()
    {
        cout << "In derived\n";
        baseMethod();
    }

    virtual void method()
    {
        cout << "In Derived : method\n";
    }
};

int main()
{
    Base *b = new Derived;
    delete b;
    
    return 0;
}