/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:15:31 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/21 19:48:34 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("Default"){};
AMateria::AMateria(std::string const n) : type(n){};
AMateria::AMateria(const AMateria& am){
	type = am.type;
}
AMateria& AMateria::operator=(const AMateria& am){
	if (this != &am)
		type = am.type;
	return *this;
}
AMateria::~AMateria(){}

std::string const& AMateria::getType() const{return type;}
