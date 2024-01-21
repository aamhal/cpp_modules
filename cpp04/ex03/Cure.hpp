/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:57:28 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/21 18:17:55 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
Cure();
Cure(std::string const & type);
Cure(const Cure& am);
Cure& operator=(const Cure& am);
virtual ~Cure();

Cure* clone() const;
virtual void use(ICharacter& target);
};
#endif