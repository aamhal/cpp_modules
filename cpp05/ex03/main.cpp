/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:05:25 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/20 08:06:28 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
    try{
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("shrubbery request", "Bender");
        if (rrf != NULL)
        {
            Bureaucrat b("name", 1);
            rrf->beSigned(b);
            rrf->execute(b);
            delete rrf;
        }
    }
     catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
	return 0;
}