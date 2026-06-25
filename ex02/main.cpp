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

    std::cout << std::setfill(' ');
    std::cout << RED "|" BLUE "the address of the string is :" GREEN << &hi << RESET << std::setw(22) << RED "|" RESET << std::endl;
    std::cout << RED "|" BLUE "the address held by the pointer is :" GREEN << &pointer << RESET << std::setw(16) << RED "|" RESET << std::endl;
    std::cout << RED "|" BLUE "the address held by the reference is :" GREEN << &ref << RESET << std::setw(14) << RED "|" RESET << std::endl;
    
    std::cout << RED "|" << std::setfill('-') << std::setw(57) << "-|" << RESET << std::endl;

    std::cout << std::setfill(' ');
    std::cout << RED "|" BLUE "the value of the string is :" GREEN << hi << RESET << std::setw(22) << RED "|" RESET << std::endl;
    std::cout << RED "|" BLUE "the value pointed by the pointer is :" GREEN << pointer << RESET << std::setw(15) << RED "|" RESET << std::endl;
    std::cout << RED "|" BLUE "the value pointed by the reference is : " GREEN << ref << RESET RED "|" RESET << std::endl;

    std::cout << RED "|" RED << std::setfill('-') << std::setw(57) << "-|" << RESET << std::endl;
    return 0;
}
