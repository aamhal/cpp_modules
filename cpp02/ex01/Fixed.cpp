/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:37:31 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/15 13:07:54 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPoint(0) {
	std::cout << "Default constructor called " << std::endl;
};

Fixed::Fixed(const int fp): fixedPoint(fp << 8) {
	std::cout << "Int constructor called " << std::endl;
};

Fixed::Fixed(const float fp): fixedPoint((int)roundf(fp * (1 << 8))) {
	std::cout << "Float constructor called " << std::endl;
};

Fixed::Fixed(const Fixed& f){
	std::cout << "Copy constructor called " << std::endl;
	*this = f;
};
Fixed::~Fixed(){
	std::cout << "Destructor called " << std::endl;
}

Fixed& Fixed::operator=(const Fixed& f) {
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &f)
		fixedPoint = f.getRawBits();
		return *this;
}


int Fixed::getRawBits() const{
	// std::cout << "getRawBits member function called " << std::endl;
	return fixedPoint;}

void Fixed::setRawBits(int const raw){
	// std::cout << "setRawBits member function called " << std::endl;
	fixedPoint = raw;
}

float Fixed::toFloat() const{
	return ((float)fixedPoint / (1 << 8));
}

int Fixed::toInt() const{
	return (fixedPoint >> 8);
}

std::ostream& operator<<(std::ostream& out, const Fixed& f){
	out << f.toFloat();
	return (out);
}

