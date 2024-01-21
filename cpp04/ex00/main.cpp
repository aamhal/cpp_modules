/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 10:11:42 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/20 16:10:55 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "cat.hpp"
#include "WrongCat.hpp"

int main() 
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* Wrongmeta = new WrongAnimal();
	const WrongAnimal*  wj = new WrongCat();
	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl; 
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
	meta->makeSound();
	std::cout<<"---------------------------"<< std::endl;
	wj->makeSound();
	Wrongmeta->makeSound();
	delete i;
	delete j;
	delete meta;
	delete wj;
	delete Wrongmeta;

	return 0; 
}