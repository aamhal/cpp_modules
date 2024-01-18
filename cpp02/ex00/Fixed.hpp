/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 09:37:35 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/15 18:08:28 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

#include <iostream>
class Fixed
{
	private:
		int fixedPoint;
		static const int fractionalBits = 8;
	public :
	Fixed();
	Fixed(const Fixed& fo);
	Fixed& operator=(const Fixed& f);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
};

	
#endif

