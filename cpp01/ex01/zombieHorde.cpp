/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 16:00:47 by aamhal            #+#    #+#             */
/*   Updated: 2023/12/25 16:19:53 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N <= 0)
	{
		std::cout << "u can t have a negative or 0 umber of Zombies " << std::endl;
		exit(1);	
	}
	Zombie *ZHoede = new Zombie[N];
	for (int i = 0; i < N; i++)
		ZHoede[i].setZombie(name);
	return ZHoede;
}