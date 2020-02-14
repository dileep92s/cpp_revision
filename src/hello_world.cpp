#include <iostream>
#include <string>

using namespace std;

// basic structure with i/o

int main()
{
    string name; 
    string location;
    int age;

    cout << "hello, whats your name: " << endl;
    cin >> name;
    cout << "hello, whats your age: " << endl;
    cin >> age;
    cout << "hello, where do you stay: " << endl;
    cin >> location;
    cout << "hello " << name << ". Your age is " << age << " and you stay in " << location << endl;

    return 0;
}
