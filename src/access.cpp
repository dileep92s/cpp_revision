#include <iostream>

using namespace std;

class A
{
    private:
    int x;

    protected:
    int y;

    public:

        int z;

        A():z(2)
        {
            x = 2;
            y = 2;
        }

        void modify(A &a)
        {
            a.x = 4;
        }

        int get_x()
        {
            return x;
        }

        int get_y()
        {
            return y;
        }
};

// if no access specifier its private inheritance
class B: A
{
    void access_base()
    {
        // cout << x;  // error - it was already private
        cout << y;  // ok - but now its private
        cout << z;  // ok but now its private
    }
};

class C: B
{
    void access_base()
    {
        // cout << x;  // error
        // cout << y;  // error 
        // cout << z;  // error - because of private inheritance in B everything is private now
    }
};


class D: protected A
{
    void access_base()
    {
        // cout << x;  // error - it was already private
        cout << y;  // ok - but now its protected
        cout << z;  // ok but now its protected
    }
};

class E : D
{
    void access_base()
    {
        // cout << x;  // error - it was already private
        cout << y;  // ok 
        cout << z;  // ok 
    }
};

// public inheritance will not change any access it will be same as base


int main()
{
    A a1, a2;

    cout << a1.get_x(); // 2    
    // cout << a1.x; // error
    // cout << a1.y; // error
    cout << a1.z; // ok

    a2.modify(a1);      
    // protection in C++ is class level, not at object level --> this is used in copy constructor as well
    cout << a1.get_x(); // 4, WTF?

    return 0;
}