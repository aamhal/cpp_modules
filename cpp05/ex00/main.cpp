/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:05:25 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/19 10:35:35 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b("Bureaucrat", 1);
        std::cout << b;
        b.decrementGrade();
        std::cout << b;
        b.incrementGrade();
        std::cout << b;
        b.incrementGrade();
        std::cout << b;
    }catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "---------------------" << std::endl;
    }
    try
    {
        Bureaucrat b("Bureaucrat", 150);
        std::cout << b;
        b.incrementGrade();
        std::cout << b;
        b.decrementGrade();
        std::cout << b;
        b.decrementGrade();
        std::cout << b;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
     
    return 0;
}