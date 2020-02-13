#include <iostream>
#include <string>

using namespace std;

// basic structure with i/o

int main()
{
    string name; 

    cout << "hello, whats your name: " << endl;
    cin >> name;
    cout << "hello " << name << endl;
    
    return 0;
}