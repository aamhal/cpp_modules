/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 12:11:28 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/19 09:04:28 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "FragTrap Default constructor called "<< std::endl;
	name = "Default";
	HitPoint = 100;
	EnergiePoint = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(const std::string n) {
	std::cout << "FragTrap constructor called "<< std::endl;
	name = n;
	HitPoint = 100;
	EnergiePoint = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& ft) {
	std::cout << "FragTrap copy constructor called "<< std::endl;
	name = ft.name;
	HitPoint = ft.HitPoint;
	EnergiePoint = ft.EnergiePoint;
	AttackDamage = ft.AttackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap& ft){
	std::cout << "FragTrap coppy assignment operator "<< std::endl;
	if (this != &ft)
	{
		name = ft.name;
		HitPoint = ft.HitPoint;
		EnergiePoint = ft.EnergiePoint;
		AttackDamage = ft.AttackDamage;
	}
	return *this;
}

FragTrap::~FragTrap() {std::cout << "FragTrap destructor called "<< std::endl;}

void FragTrap::highFivesGuys(void){
	if (HitPoint)
    	std::cout << "FragTrap " << name << " ask for a high five" << std::endl;
	else 
    	std::cout << "FragTrap " << name << " is already dead can't ask for a high five !!" << std::endl;
}