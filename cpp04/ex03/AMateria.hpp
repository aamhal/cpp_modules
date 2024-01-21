/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 15:34:58 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/21 18:16:49 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string type;
public:
AMateria();
AMateria(std::string const & type);
AMateria(const AMateria& am);
AMateria& operator=(const AMateria& am);
virtual ~AMateria();



std::string const &getType() const;
virtual AMateria* clone() const = 0;
virtual void use(ICharacter& target) = 0;
};

#endif