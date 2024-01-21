/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:52:04 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/20 18:19:47 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.hpp"


WrongCat::WrongCat() : WrongAnimal(){std::cout << "Dafault constructor of class WrongCat called"<< std::endl;}
WrongCat::WrongCat(std::string n) : WrongAnimal(n){std::cout << "Parametrize constructor of class WrongCat called"<< std::endl;}
WrongCat::WrongCat(WrongCat& a){std::cout << "copy constructor of class WrongCat called"<< std::endl;
	*this = a;
}
WrongCat& WrongCat::operator=(WrongCat& a){
	std::cout << "copy assignment operator called" <<std::endl;
	if (this != &a)
		type = a.type;
	return *this;
}
WrongCat::~WrongCat(){std::cout << "distructor of class WrongCat called"<< std::endl;}

void WrongCat::makeSound() const {std::cout <<"WrongCat sound!!"<<std::endl;}