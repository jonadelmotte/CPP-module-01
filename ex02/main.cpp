#include <iostream>
#include <string>

int main()
{
    std::string hi = "HI THIS IS BRAIN";
    std::string *pointer = &hi;
    std::string &ref = hi;

    std::cout << "the address of the string is : " << &hi << std::endl;
    std::cout << "the address held by the pointer is : " << &pointer << std::endl;
    std::cout << "the address held by the reference is : " << &ref << std::endl;
    
    std::cout << std::endl;

    std::cout << "the value of the string is : " << hi << std::endl;
    std::cout << "the value pointed by the pointer is : " << pointer << std::endl;
    std::cout << "the value pointed by the reference is : " << ref << std::endl;
}