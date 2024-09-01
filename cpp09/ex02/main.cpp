/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 07:45:18 by aamhal            #+#    #+#             */
/*   Updated: 2024/08/31 12:06:03 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <deque>
#include <iostream>
#include <vector>



int main(int ac, char **av){

	if (ac < 2){
		std::cerr << "Wrong argument number" << std::endl;
			return  1;
	}
	PmergeMe p;
	p.ft_sort(av);
	p.ft_sort_deq(av);
		







	return 0;
}