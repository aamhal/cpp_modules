/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:05:25 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/01 09:30:02 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
        Bureaucrat b1("John", 50);
        std::cout << "Bureaucrat Name: " << b1.getName() << ", Grade: " << b1.getGrade() << std::endl;

        b1.incrementGrade();
        std::cout << "Incremented Grade: " << b1.getGrade() << std::endl;

        b1.decrementGrade();
        std::cout << "Decremented Grade: " << b1.getGrade() << std::endl;

        Bureaucrat b2("Alice", 1);
        std::cout << "Bureaucrat Name: " << b2.getName() << ", Grade: " << b2.getGrade() << std::endl;
        
        b2.incrementGrade();

        Bureaucrat b3("Bob", 150);
        std::cout << "Bureaucrat Name: " << b3.getName() << ", Grade: " << b3.getGrade() << std::endl;

        b3.decrementGrade(); 
    }
    catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
	return 0;
}