#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

# define RESET "\e[0m"
# define RED "\e[31m"
# define GREEN "\e[32m"
# define BLUE "\e[1;36m"
# define CYAN "\e[0;36m"
# define PURPLE "\e[0;35m"

class Harl
{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
    
    public:
        Harl(void);
        ~Harl(void);

        void    complain(void);


}       ;


#endif