/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 20:34:03 by aamhal            #+#    #+#             */
/*   Updated: 2023/12/26 10:09:43 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string &stringREF = s;

	std::cout << "The memory address of the string variable :" << &s << std::endl;
	std::cout << "The memory address held by stringPTR      :" << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF      :" << &stringREF << std::endl;
	
	std::cout << "The value of the string variable  :" << s << std::endl;
	std::cout << "The value pointed to by stringPTR :" << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF :" << stringREF << std::endl;
}
