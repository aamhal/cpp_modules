/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:23:09 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/10 15:29:49 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon* wep;
public:
	HumanB();
	HumanB(const std::string& n);
	~HumanB();
	void setWeapon(Weapon& w);
	void attack();
};

#endif