/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:08:52 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/18 12:07:00 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("ALI");
	a.takeDamage(5);
	a.takeDamage(3);
	a.beRepaired(10);
	a.attack("lol");
	a.guardGate();
	a.attack("hamid");
	return 0;
}