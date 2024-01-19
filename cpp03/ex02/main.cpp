/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:08:52 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/18 13:32:42 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap a("ALI");
	a.takeDamage(5);
	a.takeDamage(3);
	a.beRepaired(10);
	a.attack("lol");
	a.highFivesGuys();
	a.attack("hamid");
	return 0;
}