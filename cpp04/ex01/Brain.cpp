/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:19:38 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/20 18:16:38 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {std::cout << "Default constructor of class Brain called"<< std::endl;}
Brain::Brain(Brain& a){std::cout << "copy constructor of class Brain called"<< std::endl;
	*this = a;
}
Brain& Brain::operator=(Brain& a){
	std::cout << "copy assignment operator called" <<std::endl;
	if (this != &a)
	{
		for (size_t i = 0; i < 100; i++)
		{
			ideas[i] = a.ideas[i];
		}
	}
	
	return *this;
}
Brain::~Brain(){std::cout << "distructor of class Brain called"<< std::endl;}

