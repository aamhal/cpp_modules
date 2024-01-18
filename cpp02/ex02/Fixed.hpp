/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:37:35 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/15 17:58:52 by aamhal           ###   ########.fr       */
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

	bool operator<(const Fixed& f)  const;
	bool operator>(const Fixed& f)  const;
	bool operator<=(const Fixed& f) const;
	bool operator>=(const Fixed& f) const;
	bool operator==(const Fixed& f) const;
	bool operator!=(const Fixed& f) const;


	Fixed operator+(const Fixed& f);
	Fixed operator-(const Fixed& f);
	Fixed operator*(const Fixed& f);
	Fixed operator/(const Fixed& f);

	Fixed& operator++();
	Fixed& operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	
	static Fixed& min(Fixed& a,Fixed& b);
	static const Fixed& min(const Fixed& a,const Fixed& b);
	static Fixed& max(Fixed& a,Fixed& b);
	static const Fixed& max(const Fixed& a,const Fixed& b);

};

std::ostream& operator<<(std::ostream& out, const Fixed& f);
	
#endif