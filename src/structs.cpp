#include <iostream>

class A
{

};

// sizeof empty struct or class is 1 in C++
struct B
{

};

// functions are not part of size of struct
class C
{
    public:
        int x;
        void info();
};

// size of C + D
class D: public C
{
    public:
        int y;
        void info();
};


// virtual pointer takes 8 bytes x64
class E
{
    public:
        virtual void info();
};

// no extra virtual pointer allocated in derived class 
class F:public E
{
    public:
        virtual void info();
};

struct G
{
    mutable int x;
    int y;

    G():x(0),y(0)
    {

    }
};


using std::cout;
using std::endl;

int main()
{
    cout << sizeof(A) << endl;  // 1
    cout << sizeof(B) << endl;  // 1
    cout << sizeof(C) << endl;  // 4
    cout << sizeof(D) << endl;  // 8
    cout << sizeof(E) << endl;  // 8
    cout << sizeof(F) << endl;  // 8
    cout << sizeof(void*) << endl;  // 8

    const G g_obj;
    g_obj.x = 2; // OK
    // g_obj.y = 2; // error 

    return 0;
}
