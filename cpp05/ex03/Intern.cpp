/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 07:45:57 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/20 08:08:08 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern() {}
Intern::Intern(const Intern &other) {
	*this = other; 
}
Intern &Intern::operator=(const Intern &other) { 
		(void)other;
		return *this;
}
Intern::~Intern() {}

AForm* Intern::makeForm(const std::string &formName, const std::string &target)
{
	std::string array[] =  { "shrubbery request","robotomy request","presidential pardon"};
	int j = 0;
	for (int i =0; i <= 2 ; i++)
	{
		if (array[i] == formName)
		{
			j = i;
			break;
		}
		j++;
	}
	switch (j)
	{
	case 0:
		std::cout << "shrubbery request created " << std::endl;
		return new ShrubberyCreationForm(target);
	case 1:
		std::cout << "robotomy request created " << std::endl;
		return new RobotomyRequestForm(target);
	case 2:
		std::cout << "presidential pardon created " << std::endl;
		return new PresidentialPardonForm(target);
	
	default:
		std::cout << "Error: Form name \"" << formName << "\" not recognized." << std::endl;
		return NULL;
	}
	std::cout << "Error: Form name \"" << formName << "\" not recognized." << std::endl;
	return (NULL);
}

