/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 09:53:32 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/20 17:37:36 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain* brain;
public:
	Cat();
	Cat(std::string n);
	Cat(Cat& a);
	Cat& operator=(Cat& a);
	virtual ~Cat();
	virtual void makeSound() const ;
};


#endif