/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:18:46 by aamhal            #+#    #+#             */
/*   Updated: 2024/08/27 15:49:26 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "RPN.hpp"
#include <iostream>
int main(int ac, char **av){

	if (ac != 2)
	{
		std::cerr << "wrong arguments nbr!"<< std::endl;
		return 1;
	}
	RPN r(av[1]);
	r.calculate();

	return 0;
}