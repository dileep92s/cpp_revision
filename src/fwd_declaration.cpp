#include <iostream>

// no need to provide variable names
int add(int a, int b);

// doesnt matter
int add(int, int);

int main()
{
    std::cout << add(1,2);
    return 0;
}

// its ok if the name of variables change
int add(int x, int y)
{
    return x+y;
}