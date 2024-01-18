/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:02:40 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/18 11:39:47 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "Default constructor called "<< std::endl;
	name = "Default";
	HitPoint = 100;
	EnergiePoint = 50;
	AttackDamage = 20;
};

ScavTrap::ScavTrap(const std::string n) {
	std::cout << "constructor called "<< std::endl;
	name = n;
	HitPoint = 100;
	EnergiePoint = 50;
	AttackDamage = 20;
};

ScavTrap::ScavTrap(const ScavTrap& ct) {
	std::cout << "copy constructor called "<< std::endl;
	name = ct.name;
	HitPoint = ct.HitPoint;
	EnergiePoint = ct.EnergiePoint;
	AttackDamage = ct.AttackDamage;
};

ScavTrap& ScavTrap::operator=(const ScavTrap& ct){
	std::cout << "coppy assignment operator "<< std::endl;
	if (this != &ct)
	{
		name = ct.name;
		HitPoint = ct.HitPoint;
		EnergiePoint = ct.EnergiePoint;
		AttackDamage = ct.AttackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap() {std::cout << "destructor called "<< std::endl;}
