#include <iostream>

using namespace std;

class A
{
    private:
        A()
        {
            cout << "A Constructed\n";
        }       

    public:
    int x;

    static A* getA()
    {
        static A *obj = nullptr;

        if(obj == nullptr)
        {
            obj = new A;
        }

        return obj;
    }
};

int main()
{
    A *obj_1, *obj_2;

    obj_1 = A::getA();
    obj_1->x = 2;

    obj_2 = A::getA();
    if (obj_2->x == 2)
    {
        cout << "same\n";
    }


    
    return 0;
}