#include <iostream>
#include <string>

// use some exsting namespace
using namespace std;

int x = 1;

namespace ns_1
{
    int x = 2;

    namespace ns_2
    {
        int x = 3;
    }
}

int main()
{
    int x = 4;

    cout << x << endl; // prints 4
    cout << ::x << endl; // prints 1
    cout << ns_1::x << endl; // prints 2
    // cout << ns_2::x << endl; // error
    cout << ns_1::ns_2::x << endl; // prints 3
    
    return 0;
}
