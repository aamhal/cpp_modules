/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 10:11:42 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/21 20:22:04 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "cat.hpp"
#include "WrongCat.hpp"

int main() 
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* Wrongmeta = new WrongAnimal();
	const WrongAnimal*  wj = new WrongCat();
	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl; 
	i->makeSound(); 
	j->makeSound();
	delete i;
	delete j;
	delete wj;
	delete Wrongmeta;
	std::cout<<"------------------------------------------------------------------"<< std::endl;
	return 0; 
}