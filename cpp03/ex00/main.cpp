/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:08:52 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/19 15:14:49 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a;
	// a.takeDamage(5);
	a.takeDamage(-3);
	// a.beRepaired(-10);
	a.attack("hamid");
	return 0;
}