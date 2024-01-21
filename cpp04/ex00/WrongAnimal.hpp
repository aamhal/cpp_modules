/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:49:23 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/20 15:54:17 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(std::string n);
	WrongAnimal(WrongAnimal& a);
	WrongAnimal& operator=(WrongAnimal& a);
	~WrongAnimal();
	const std::string& getType() const;
	 void makeSound() const;
};


#endif