/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 10:59:15 by aamhal            #+#    #+#             */
/*   Updated: 2023/12/25 15:12:18 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string s){
	name = s;
	std::cout << "Constructor of :" << name << std::endl;
}

Zombie::Zombie(){
	name = "Default";
	std::cout << "Default constructor of :" << name << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Destructor of :" << name << std::endl;
}

void Zombie::annouce() {
	std::cout << name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

