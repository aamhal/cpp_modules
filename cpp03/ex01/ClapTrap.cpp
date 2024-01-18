/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:09:06 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/18 11:35:44 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default") , HitPoint(10) , EnergiePoint(10) , AttackDamage(0) {
	std::cout << "Default constructor called "<< std::endl;
};

ClapTrap::ClapTrap(const std::string n) : name(n) , HitPoint(10) , EnergiePoint(10) , AttackDamage(0) {
	std::cout << "constructor called "<< std::endl;
};

ClapTrap::ClapTrap(const ClapTrap& ct) {
	std::cout << "copy constructor called "<< std::endl;
	name = ct.name;
	HitPoint = ct.HitPoint;
	EnergiePoint = ct.EnergiePoint;
	AttackDamage = ct.AttackDamage;
};

ClapTrap& ClapTrap::operator=(const ClapTrap& ct){
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


ClapTrap::~ClapTrap() {std::cout << "destructor called "<< std::endl;}

void ClapTrap::attack(const std::string& target){
	if (EnergiePoint > 0 && HitPoint > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
		EnergiePoint--;
	}
	else
		std::cout << "not enought energie points or hit points to attack !!!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if ( EnergiePoint > 0 && HitPoint > 0)
	{
		std::cout << "ClapTrap " << name << " repairs itself , gaining " << amount << " hit points!" << std::endl;
		EnergiePoint--;
		HitPoint += amount;
	}
	else
		std::cout << "not enought energie points or hit points to berepaired !!!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (HitPoint == 0)
	{
		std::cout << "ClapTrap " << name << " is already dead " << std::endl;
		HitPoint = 0;
	}
	else if (amount >= HitPoint)
	{
		std::cout << "ClapTrap " << name << " have no hit point he died " << std::endl;
		HitPoint = 0;
	}
	else
	{
		std::cout << "ClapTrap " << name << " took " <<  amount << " damage " << std::endl;
		HitPoint -= amount;
	}
}
