/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 10:56:55 by aamhal            #+#    #+#             */
/*   Updated: 2023/12/25 15:11:45 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
private:
	std::string name;
public:
	Zombie(std::string s);
	Zombie();
	~Zombie();
	void annouce();
};
Zombie* newZombie(std::string name);
void randomChump(std::string name);
#endif