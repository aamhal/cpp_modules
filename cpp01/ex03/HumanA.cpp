/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:11:55 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/13 20:03:31 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& n, Weapon& W) : name(n), wep(W){
	// std::cout << "Constructor of :" << name << "with wepon :" << wep.getType() << std::endl;
}

HumanA::~HumanA() {
	// std::cout << "Destructor of :" << name << "with wepon :" << wep.getType() << std::endl;
}

void HumanA::attack() {
	std::cout << name << " attacks with their " << wep.getType() << std::endl;
}
