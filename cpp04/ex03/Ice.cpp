/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:55:06 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/21 17:07:06 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){};
Ice::Ice(const Ice& am){
	type = am.type;
}
Ice& Ice::operator=(const Ice& am){
	if (this != &am)
		type = am.type;
	return *this;
}
Ice::~Ice(){}

Ice* Ice::clone() const {return new Ice(*this);}

void Ice::use(ICharacter& target){
	 std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}