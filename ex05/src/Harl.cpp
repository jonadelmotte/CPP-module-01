/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 11:02:47 by jdelmott          #+#    #+#             */
/*   Updated: 2026/10/05 14:32:23 by jdelmott         ###   ########.fr       */
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
    std::cout << BLUE "Harl seems to have an issue\nIs it the comming of the antichrist ?" RESET << std::endl;
}

void    Harl::info(void)
{
    std::cout << BLUE "Harl : " RED "\n'i can feel it..\nThe antichrist is trying to manifest'" RESET << std::endl;
}

void    Harl::warning(void)
{
    std::cout << BLUE "Harl : " RED "\n'we should get rid of our sins !!!\nEveryone CONFESS !!!'" RESET << std::endl;
}

void    Harl::error(void)
{
    std::cout << BLUE "The antichrist has descended upon earth\nHarl had warned us about it..." RESET << std::endl;
}

void    Harl::complain(void)
{
    debug();
    info();
    warning();
    error();
    /*do something jona pleaaaase*/
}
