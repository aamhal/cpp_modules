/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:56:08 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/21 20:22:51 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : Animal(),brain(new Brain){std::cout << "Default constructor of class Cat called"<< std::endl;}
Cat::Cat(std::string n) : Animal(n),brain(new Brain){std::cout << "Parametrize constructor of class Cat called"<< std::endl;}
Cat::Cat(Cat& a){std::cout << "copy constructor of class Cat called"<< std::endl;
	*this = a;
}
Cat& Cat::operator=(Cat& a){
	std::cout << "copy assignment operator called" <<std::endl;
	if (this != &a)
	{
		type = a.type;
		brain = new Brain(*a.brain);
	}
	return *this;
}
Cat::~Cat(){std::cout << "distructor of class Cat called"<< std::endl;delete brain;}

void Cat::makeSound()const {std::cout <<"Cat sound!!"<<std::endl;
}

