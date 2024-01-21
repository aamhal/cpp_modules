/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 10:08:38 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/20 18:31:18 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "dog.hpp"

Dog::Dog() : Animal() ,brain(new Brain) {std::cout << "Default constructor of class Dog called"<< std::endl;{}
}
Dog::Dog(std::string n) : Animal(n),brain(new Brain){std::cout << "Parametrize constructor of class Dog called"<< std::endl;}
Dog::Dog(Dog& a){std::cout << "copy constructor of class Dog called"<< std::endl;
	*this = a;
}
Dog& Dog::operator=(Dog& a){
	std::cout << "copy assignment operator called" <<std::endl;
	if (this != &a)
	{
		type = a.type;
		brain = new Brain(*a.brain);
	}
	return *this;
}
Dog::~Dog(){std::cout << "distructor of class Dog called"<< std::endl;delete brain;}

void Dog::makeSound()const {std::cout <<"Dog bark!!"<<std::endl;}

