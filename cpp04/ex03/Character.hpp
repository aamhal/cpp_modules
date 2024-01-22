/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:17:21 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/22 11:04:42 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	AMateria *inventory[4];
public:
Character();
Character(std::string const type);
Character(const Character& am);
Character& operator=(const Character& am);
virtual ~Character();
std::string const &getName() const; 



void equip(AMateria *m);
void unequip(int idx);
void use(int idx, ICharacter &target);
};

#endif