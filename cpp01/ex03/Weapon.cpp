/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:06:31 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/10 15:23:41 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string s) {
	type = s;
}

const std::string& Weapon::getType() {return type;}


Weapon::Weapon(std::string s) {
	type = s;
	// std::cout << "Constructor of :" << type <<std::endl;
}
Weapon::Weapon() {
	type = "Default weapon";
	// std::cout << "Default constructor of :" << type <<std::endl;
}
Weapon::~Weapon() {
	// std::cout << "Destructor of :" << type <<std::endl;
}