/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 09:02:54 by aamhal            #+#    #+#             */
/*   Updated: 2024/08/03 08:38:56 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> a(5);
	Array<std::string> b(3);
	Array<int> c;

	try
	{
		std::cout << "a size: " << a.size() << std::endl;
		std::cout << "b size: " << b.size() << std::endl;
		std::cout << "c size: " << c.size() << std::endl;
		a[0] = 42;
		std::cout << "a[0]: " << a[0] << std::endl;
		a[1] = 4242;
		std::cout << "a[1]: " << a[1] << std::endl;
		a[4] = 21;
		std::cout << "a[4]: " << a[4] << std::endl;
		std::cout << "a[5]: " << a[5] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "b[0]: " << b[0] << std::endl;
		b[0] = "Hello";
		std::cout << "b[0]: " << b[0] << std::endl;
		b[1] = "World";
		std::cout << "b[1]: " << b[1] << std::endl;
		b[2] = "!";
		std::cout << "b[2]: " << b[2] << std::endl;
		std::cout << "b[3]: " << b[3] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "c[0]: " << c[0] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}