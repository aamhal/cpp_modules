/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:56:08 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/20 18:19:52 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"


Cat::Cat() : Animal(){std::cout << "Default constructor of class Cat called"<< std::endl;}
Cat::Cat(std::string n) : Animal(n){std::cout << "Parametrize constructor of class Cat called"<< std::endl;}
Cat::Cat(Cat& a){std::cout << "copy constructor of class Cat called"<< std::endl;
	*this = a;
}
Cat& Cat::operator=(Cat& a){
	std::cout << "copy assignment operator called" <<std::endl;
	if (this != &a)
		type = a.type;
	return *this;
}
Cat::~Cat(){std::cout << "distructor of class Cat called"<< std::endl;}

void Cat::makeSound() const {std::cout <<"Cat sound!!"<<std::endl;}

