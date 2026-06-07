#include <iostream>
#include <string>
#include <iomanip>

# define RESET "\e[0m"
# define RED "\e[31m"
# define GREEN "\e[32m"
# define BLUE "\e[1;36m"
# define CYAN "\e[0;36m"
# define PURPLE "\e[0;35m"

int main()
{
    std::string hi = "HI THIS IS BRAIN";
    std::string *pointer = &hi;
    std::string &ref = hi;

    std::cout << RED "|" << std::setfill('-') << std::setw(57) << "-|" << RESET << std::endl;

    std::cout << RED "|" BLUE "the address of the string is : " << GREEN << &hi << RED "              |" RESET << std::endl;
    std::cout << RED "|" BLUE "the address held by the pointer is : " << GREEN << &pointer << RED "        |" RESET << std::endl;
    std::cout << RED "|" BLUE "the address held by the reference is : " << GREEN << &ref << RED "      |" RESET << std::endl;
    
    std::cout << RED "|" << std::setfill('-') << std::setw(57) << "-|" << RESET << std::endl;

    std::cout << RED "|" BLUE "the value of the string is : " GREEN << hi << RED "           |" RESET << std::endl;
    std::cout << RED "|" BLUE "the value pointed by the pointer is : " GREEN << pointer << RED "       |" RESET << std::endl;
    std::cout << RED "|" BLUE "the value pointed by the reference is : " GREEN << ref << RED "|" RESET << std::endl;

    std::cout << RED "|" RED << std::setfill('-') << std::setw(57) << "-|" << RESET << std::endl;
    return 0;
}
