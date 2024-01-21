/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:46:07 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/20 18:16:53 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Default"){std::cout << "Default constructor of class animal called"<< std::endl;}
Animal::Animal(std::string n) : type(n){std::cout << "Parametrize constructor of class animal called"<< std::endl;}
Animal::Animal(Animal& a){std::cout << "copy constructor of class animal called"<< std::endl;
	*this = a;
}
Animal& Animal::operator=(Animal& a){
	std::cout << "copy assignment operator called" <<std::endl;
	if (this != &a)
		type = a.type;
	return *this;
}
Animal::~Animal(){std::cout << "distructor of class animal called"<< std::endl;}

void Animal::makeSound() const {std::cout <<"Animal sound!!"<<std::endl;}

const std::string& Animal::getType() const {return type;}