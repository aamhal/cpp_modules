/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:05:16 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/18 11:39:40 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
class ClapTrap
{
	protected:
		std::string name;
		unsigned int HitPoint;
		unsigned int EnergiePoint;
		unsigned int AttackDamage;
	public:
		ClapTrap();
		ClapTrap(const std::string n);
		ClapTrap(const ClapTrap& ct);
		ClapTrap& operator=(const ClapTrap& ct);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
	

#endif