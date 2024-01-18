/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 11:08:23 by aamhal            #+#    #+#             */
/*   Updated: 2023/12/27 12:51:41 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon& wep;
public:
	HumanA(const std::string& n, Weapon& W);
	~HumanA();
	void attack();
};

#endif