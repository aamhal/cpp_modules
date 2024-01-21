/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:43:22 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/20 18:43:50 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
#define AANIMAL_H

#include <iostream>
#include "Brain.hpp"

class AAnimal
{
protected:
	std::string type;
public:
	AAnimal();
	AAnimal(std::string n);
	AAnimal(AAnimal& a);
	AAnimal& operator=(AAnimal& a);
	virtual ~AAnimal();
	const std::string& getType() const;
	virtual void makeSound() const = 0;
};


#endif