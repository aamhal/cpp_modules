/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:57:03 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/20 13:10:01 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(std::string n);
	Dog(Dog& a);
	Dog& operator=(Dog& a);
	virtual ~Dog();
	virtual void makeSound() const ;

};


#endif