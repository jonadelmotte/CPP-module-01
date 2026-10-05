/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdelmott <jdelmott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 11:02:47 by jdelmott          #+#    #+#             */
/*   Updated: 2026/10/05 10:48:45 by jdelmott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl(void)
{
    std::cout << "On the seventh day, Harl was created" << std::endl;
}

Harl::~Harl(void)
{
    std::cout << "Harl has died, long live Harl" << std::endl;
}

void    Harl::debug(void)
{
    std::cout << "Harl seems to have an issue\nIs it the comming of the antichrist ?" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "Harl : 'i can feel it..\nThe antichrist is trying to manifest\n'" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "Harl : 'we should get rid of our sins !!!\nEveryone CONFESS !!!'" << std::endl;
}

void    Harl::error(void)
{
    std::cout << "The antichrist has descended upon earth\nHarl had warned us about it..." << std::endl;
}

void    Harl::complain(std::string level)
{
    /*do something jona pleaaaase*/
}


