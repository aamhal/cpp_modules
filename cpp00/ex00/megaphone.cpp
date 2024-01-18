/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:01:46 by aamhal            #+#    #+#             */
/*   Updated: 2023/12/20 15:22:43 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		std::string s;
		int i = 1;
		int j = 0;
		while(av[i])
		{
			j = 0;
			s = av[i];
			while(s[j])
			{
				s[j] = toupper(s[j]);
				j++;
			}
			std::cout << s;
			i++;
		}
			std::cout << std::endl;
	}
	return (0);
}