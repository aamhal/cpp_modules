/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 10:56:55 by aamhal            #+#    #+#             */
/*   Updated: 2023/12/25 16:03:24 by aamhal           ###   ########.fr       */
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
	void setZombie(std::string s);
	void annouce();
};
Zombie* zombieHorde( int N, std::string name );
#endif