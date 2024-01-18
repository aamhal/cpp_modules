/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:23:40 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/13 20:48:34 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB() : name("Default"), wep(NULL){}

HumanB::~HumanB() {}

HumanB::HumanB(const std::string &n) : name(n), wep(NULL) {}

void HumanB::attack() {
	if (wep)
		std::cout << name << " attacks with their " << wep->getType() << std::endl;
	else
		std::cout << "can't attack !!" << std::endl;
}

void HumanB::setWeapon(Weapon& w) {wep = &w;}