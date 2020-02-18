#include <iostream>
#include <string>

int main()
{
    int x;
    int &y = x; 
    // int &z; // error
    // int &z = 2; // error
    // int &z = &x; // error
    int *z = &x; 
    std::cout << "y : " << y << std::endl;

    *z = 4;
    std::cout << "y : " << y << std::endl;

    // prints 4 but it is not the size of y; it doesnt take any space
    std::cout << "sizeof ref : " << sizeof(y) << std::endl; 

    // use command : size bin/references for checking size of binary 

}