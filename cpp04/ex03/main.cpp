/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:08:11 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/22 11:09:38 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

void lol()
{
	system("leaks oo");
}

int main() 
{
	
	atexit(lol);
	MateriaSource lol;
	MateriaSource cc(lol);
	lol.learnMateria(new Ice());
	IMateriaSource* src = new MateriaSource(); 
	src->learnMateria(new Ice()); 
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice"); 
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->unequip(0);
	me->unequip(2);
	ICharacter* bob = new Character("bob"); 
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob; delete me; delete src; 
	return 0; 
}
