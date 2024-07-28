/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 08:14:17 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/24 10:47:41 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cfloat>
#include <sstream>

class ScalarConverter
{
private:
	ScalarConverter();
public:
	ScalarConverter(const ScalarConverter &S);
	ScalarConverter &operator=(const ScalarConverter &S);
	~ScalarConverter();
	static void convert( std::string input);








	
};

