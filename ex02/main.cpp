#include <iostream>
#include <string>
#include <iomanip>

# define RESET "\e[0m"
# define RED "\e[31m"
# define GREEN "\e[32m"
# define BLUE "\e[1;36m"

int main()
{
    std::string string= "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << RED "|" << std::setfill('-') << std::setw(57) << "-|" << RESET << std::endl;

    std::cout << std::setfill(' ');
    std::cout << RED "|" BLUE "the address of the string is :" GREEN << &string  << RESET << std::setw(22) << RED "|" RESET << std::endl;
    std::cout << RED "|" BLUE "the address held by the stringPTR is :" GREEN << &stringPTR << RESET << std::setw(14) << RED "|" RESET << std::endl;
    std::cout << RED "|" BLUE "the address held by the reference is :" GREEN << &stringREF << RESET << std::setw(14) << RED "|" RESET << std::endl;
    
    std::cout << RED "|" << std::setfill('-') << std::setw(57) << "-|" << RESET << std::endl;

    std::cout << std::setfill(' ');
    std::cout << RED "|" BLUE "the value of the string is :" GREEN << string << RESET << std::setw(22) << RED "|" RESET << std::endl;
    std::cout << RED "|" BLUE "the value pointed by the stringPTR is :" GREEN << *stringPTR << RESET << std::setw(11) << RED "|" RESET << std::endl;
    std::cout << RED "|" BLUE "the value pointed by the reference is : " GREEN << stringREF << RESET RED "|" RESET << std::endl;

    std::cout << RED "|" RED << std::setfill('-') << std::setw(57) << "-|" << RESET << std::endl;
    return 0;
}
