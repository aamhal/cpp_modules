/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:37:31 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/15 18:00:49 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0) {
	std::cout << "Default constructor called" << std::endl;
};


Fixed::Fixed(const Fixed& f){
	std::cout << "Copy constructor called" << std::endl;
	fixedPoint = f.getRawBits();
};
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& f) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &f)
		fixedPoint = f.getRawBits();
		return *this;
}


int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return fixedPoint;}
void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called" << std::endl;
	fixedPoint = raw;
}
