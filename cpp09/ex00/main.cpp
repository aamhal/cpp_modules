/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 08:19:29 by aamhal            #+#    #+#             */
/*   Updated: 2024/08/27 08:19:51 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac , char **av)
{
	if (ac == 1)
	{
		std::cout << "not enought arguments !" << std::endl;
		return 1;
	}
	if (ac < 2) {
		std::cout << "too much arguments !" << std::endl;
		return 1;
	}
	BitcoinExchange b("data.csv");
	
	b.processInputFile(av[1]);
	













	return 0;
}