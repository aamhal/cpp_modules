/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:17:26 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/22 12:00:32 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name("Default"){
	count = 0;
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
	for (int i = 0; i < 100; ++i)
		array[i] = NULL;
};
Character::Character(std::string const type) : name(type){
	count = 0;
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
	for (int i = 0; i < 100; ++i)
		array[i] = NULL;
};
Character::Character(const Character& am){
	for (int i = 0; i < 4; ++i)
		inventory[i] = NULL;
	*this = am;
}
Character& Character::operator=(const Character& am){
	if (this != &am)
	{
		 for (int i = 0; i < 4; ++i)
		{
			delete inventory[i];
			inventory[i] = NULL;
		}
		name = am.name;
		inventory[0] = am.inventory[0];
		inventory[1] = am.inventory[1];
		inventory[2] = am.inventory[2];
		inventory[3] = am.inventory[3];
	for (int i = 0; i < 100; ++i)
		array[i] = NULL;
		count = 0;
	}
	return *this;
}
		
std::string const& Character::getName() const {return name;}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			return;
		}
	}
	delete m;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		array[count] = inventory[idx];
		count++;
		inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
	{
		inventory[idx]->use(target);
	}   
}

Character::~Character(){
for (int i = 0; i < 100; ++i)
	delete array[i];
for (int i = 0; i < 4; ++i)
	delete inventory[i];
}