/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:50:45 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/20 18:16:46 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Default"){std::cout << "Default constructor of class WrongAnimal called"<< std::endl;}
WrongAnimal::WrongAnimal(std::string n) : type(n){std::cout << "Parametrize constructor of class WrongAnimal called"<< std::endl;}
WrongAnimal::WrongAnimal(WrongAnimal& a){std::cout << "copy constructor of class WrongAnimal called"<< std::endl;
	*this = a;
}
WrongAnimal& WrongAnimal::operator=(WrongAnimal& a){
	std::cout << "copy assignment operator called" <<std::endl;
	if (this != &a)
		type = a.type;
	return *this;
}
WrongAnimal::~WrongAnimal(){std::cout << "distructor of class WrongAnimal called"<< std::endl;}

void WrongAnimal::makeSound() const {std::cout <<"WrongAnimal sound!!"<<std::endl;}

const std::string& WrongAnimal::getType() const {return type;}