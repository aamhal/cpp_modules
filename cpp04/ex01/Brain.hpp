/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 16:18:00 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/20 16:36:52 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BRAIN_H
#define BRAIN_H
#include <iostream>

class Brain 
{
public:
	std::string ideas[100];
	Brain();
	Brain(Brain& a);
	Brain& operator=(Brain& a);
	~Brain();
};
#endif