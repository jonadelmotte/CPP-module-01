/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 11:02:47 by jdelmott          #+#    #+#             */
/*   Updated: 2026/10/06 14:05:05 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl(void)
{
    std::cout << BLUE "On the seventh day, Harl was created" RESET << std::endl;
}

Harl::~Harl(void)
{
    std::cout << BLUE "Harl has died, long live Harl" RESET << std::endl;
}

void    Harl::debug(void)
{
    std::cout << "\n[ DEBUG ]\n";
    std::cout << BLUE "Harl seems to have an issue\nIs it the comming of the antichrist ?" RESET << std::endl;
}

void    Harl::info(void)
{
    std::cout << "\n[ INFO ]\n";
    std::cout << BLUE "Harl : " RED "\n'i can feel it..\nThe antichrist is trying to manifest'" RESET << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "\n[ WARNING ]\n";
    std::cout << BLUE "Harl : " RED "\n'we should get rid of our sins !!!\nEveryone CONFESS !!!'" RESET << std::endl;
}

void    Harl::error(void)
{
    std::cout << "\n[ ERROR ]\n";
    std::cout << BLUE "The antichrist has descended upon earth\nHarl had warned us about it..." RESET << std::endl;
}

void    Harl::complain(std::string level)
{
    void    (Harl::*ptr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"debug", "info", "warning", "error"};

    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*ptr[i])();
            return ;
        }
    }
    std::cout << "No complain to be done" << std::endl;
}

void    Harl::complain_from(std::string level)
{
    switch ((const char *)level.c_str())
    {
        case "DEBUG"
            this->debug();
            level.assign("INFO");
        case "INFO"
            this->info();
            level.assign("WARNING");
        case "WARNING"
            this->warning();
            level.assign("ERROR");
        case "ERROR"
            this->error();
            break ; 
    }
}
