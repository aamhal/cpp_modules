/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:28:16 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/21 19:44:00 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
Ice();
Ice(const Ice& am);
Ice& operator=(const Ice& am);
virtual ~Ice();


Ice* clone() const;
virtual void use(ICharacter& target);
};

#endif