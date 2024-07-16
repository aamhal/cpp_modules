/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:05:25 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/01 10:33:32 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("Bureaucrat", 1);
		ShrubberyCreationForm form("Home");
		form.beSigned(bureaucrat);
		form.execute(bureaucrat);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Bureaucrat", 1);
		RobotomyRequestForm form("Home");
		form.beSigned(bureaucrat);
		form.execute(bureaucrat);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Bureaucrat", 1);
		PresidentialPardonForm form("Home");
		form.beSigned(bureaucrat);
		form.execute(bureaucrat);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;	
}