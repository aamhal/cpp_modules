/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:37:35 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/14 12:43:52 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>
class Fixed
{
	private:
		int fixedPoint;
		static const int fractionalBits = 8;
	public :
	Fixed();
	Fixed(const int fp);
	Fixed(const float fp);
	Fixed(const Fixed& fo);
	Fixed& operator=(const Fixed& f);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;


};

std::ostream& operator<<(std::ostream& out, const Fixed& f);
	
#endif