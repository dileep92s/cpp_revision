#include <iostream>
#include <string>

// use some exsting namespace
using namespace std;

// only string class from std
using std::string;

int x = 1;

namespace ns_1
{
    int x = 2;

    namespace ns_2
    {
        int x = 3;
    }
}


namespace
{
    // acts as static global variable; the x without any namespace has high prio
    int x = 5; 
}

int main()
{
    int x = 4; // if commented leads to error - reference to ‘x’ is ambiguous (global)
    string xyz;

    cout << x << endl; // prints 4
    cout << ::x << endl; // prints 1
    cout << ns_1::x << endl; // prints 2
    // cout << ns_2::x << endl; // error
    cout << ns_1::ns_2::x << endl; // prints 3
    
    return 0;
}
