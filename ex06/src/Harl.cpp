/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 11:02:47 by jdelmott          #+#    #+#             */
/*   Updated: 2026/11/02 11:41:09 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl(void)
{
    std::cout << BLUE "On the seventh day, Harl was created\n" RESET << std::endl;
}

Harl::~Harl(void)
{
    std::cout << BLUE "Harl has died, long live Harl\n" RESET << std::endl;
}

void    Harl::debug(void)
{
    std::cout << PURPLE "[ DEBUG ]" RESET "\n";
    std::cout << BLUE "Harl seems to have an issue\nIs it the comming of the antichrist ?\n" RESET << std::endl;
}

void    Harl::info(void)
{
    std::cout << PURPLE "[ INFO ]" RESET "\n";
    std::cout << BLUE "Harl : " RED "\n'i can feel it..\nThe antichrist is trying to manifest'\n" RESET << std::endl;
}

void    Harl::warning(void)
{
    std::cout << PURPLE "[ WARNING ]" RESET "\n";
    std::cout << BLUE "Harl : " RED "\n'we should get rid of our sins !!!\nEveryone CONFESS !!!'\n" RESET << std::endl;
}

void    Harl::error(void)
{
    std::cout << PURPLE "[ ERROR ]" RESET "\n";
    std::cout << BLUE "The antichrist has descended upon earth\nHarl had warned us about it...\n" RESET << std::endl;
}

void    Harl::complain(std::string level)
{
    void    (Harl::*ptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    for (; i < 4; i++)
    {
        if (levels[i] == level)
            break ;
    }
    switch (i)
    {
        case 0:
            (this->*ptr[0])();
        case 1:
            (this->*ptr[1])();
        case 2:
            (this->*ptr[2])();
        case 3:
            (this->*ptr[3])();
            break;
        
        default:
            std::cout << "No complain to be done" << std::endl;
            break;
    }
}


