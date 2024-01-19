/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:02:40 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/18 12:18:19 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap Default constructor called "<< std::endl;
	name = "Default";
	HitPoint = 100;
	EnergiePoint = 50;
	AttackDamage = 20;
}

ScavTrap::ScavTrap(const std::string n) {
	std::cout << "ScavTrap constructor called "<< std::endl;
	name = n;
	HitPoint = 100;
	EnergiePoint = 50;
	AttackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& st) {
	std::cout << "ScavTrap copy constructor called "<< std::endl;
	name = st.name;
	HitPoint = st.HitPoint;
	EnergiePoint = st.EnergiePoint;
	AttackDamage = st.AttackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& st){
	std::cout << "ScavTrap coppy assignment operator "<< std::endl;
	if (this != &st)
	{
		name = st.name;
		HitPoint = st.HitPoint;
		EnergiePoint = st.EnergiePoint;
		AttackDamage = st.AttackDamage;
	}
	return *this;
}


void ScavTrap::attack(const std::string& target){
	if (EnergiePoint > 0 && HitPoint > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
		EnergiePoint--;
	}
	else
		std::cout << "not enought energie points or hit points to attack !!!" << std::endl;
}

ScavTrap::~ScavTrap() {std::cout << "ScavTrap destructor called "<< std::endl;}


void ScavTrap::guardGate() {
	if (HitPoint)
    	std::cout << "ScavTrap " << name << " is now in Gatekeeper mode!" << std::endl;
	else 
    	std::cout << "ScavTrap " << name << " is already dead can't activate gatekeeper mode !!" << std::endl;
}