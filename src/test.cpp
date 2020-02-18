#include <iostream>

using namespace std;

class A
{
    public:
    virtual void xx()
    {
        using std::cout;
        cout << "base\n";

    }

};

class B : public A
{
    public:
    void xx()
    {
        using std::cout;
        cout << "derived\n";
    }
};


int fib(int x)
{
    if(x == 0)
    {
        return 0;
    }
    else if (x == 1)
    {
        return 1;
    }
    else
    {
        return fib(x-1) + fib(x-2);
    }   
}

void fibmemo(int z)
{
    int x{0},y{1};

    if(z > 0)
    {
        cout << x << " ";
    }

    if(z > 1)
    {
        cout << y << " ";
    }

    for(int i=2; i<z; i++)
    {
        int k = x + y;
        // cout << k << " ";
        cout << &k ;
        x = y;
        y = k;
    }

    cout << "\n";
}



int main()
{
    // virtual
    // A *aa;
    // B bb;

    // aa = &bb;
    // aa->xx();

    // odd or even
    int x = 7;
    if( x & 1)
        cout << "odd \n";
    else
        cout << "even \n";

    // fibonacci
    for(int i=0; i<10; i++)
        cout << fib(i) << " ";
    cout << "\n";

    // fibonacci memo
    fibmemo(10);



    return 0;
}