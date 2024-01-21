/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:57:53 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/21 17:07:32 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){};
Cure::Cure(const Cure& am){
	type = am.type;
}
Cure& Cure::operator=(const Cure& am){
	if (this != &am)
		type = am.type;
	return *this;
}
Cure::~Cure(){}

Cure* Cure::clone() const {return new Cure{*this};}
void Cure::use(ICharacter& target){
        std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

