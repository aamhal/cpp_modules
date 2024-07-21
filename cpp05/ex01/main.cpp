/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:05:25 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/20 07:49:14 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
   try
   {
        Bureaucrat B("1", 30);
        Form f("f1", 50, 40);
        f.beSigned(B);
        B.signForm(f);
   }
   catch(const std::exception& e)
   {
        std::cerr << e.what() << '\n';
   }
   
     
    return 0;
}