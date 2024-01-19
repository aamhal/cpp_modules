/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:02:44 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/18 12:01:21 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string n);
	ScavTrap(const ScavTrap& st);
	ScavTrap& operator=(const ScavTrap& st);
	~ScavTrap();
	void guardGate();
	void attack(const std::string& target);

};




#endif