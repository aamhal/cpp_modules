/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:47:32 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/20 18:51:57 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Default"){std::cout << "Default constructor of class Aanimal called"<< std::endl;}
AAnimal::AAnimal(std::string n) : type(n){std::cout << "Parametrize constructor of class Aanimal called"<< std::endl;}
AAnimal::AAnimal(AAnimal& a){std::cout << "copy constructor of class Aanimal called"<< std::endl;
	*this = a;
}
AAnimal& AAnimal::operator=(AAnimal& a){
	std::cout << "copy assignment operator called" <<std::endl;
	if (this != &a)
		type = a.type;
	return *this;
}
AAnimal::~AAnimal(){std::cout << "distructor of class Aanimal called"<< std::endl;}

const std::string& AAnimal::getType() const {return type;}