/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 16:11:57 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/06 18:02:18 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug() {
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info() {
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning() {
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() {
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

int findLevel(std::string tab[], std::string level)
{
    int i = 0;
    while (i < 4)
    {
        if (tab[i] == level)
            return i;
        i++;
    }
    std::cout << "unknown message : " << level << std::endl;
        return -1;
}

void Harl::complain(std::string level)
{
    void (Harl::*ptrToFunc[4])() = {&Harl::debug,&Harl::error,&Harl::info,&Harl::warning};
    std::string tab[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
    int index = findLevel(tab, level);
    if (index != -1)
   (this->*ptrToFunc[index])();
}