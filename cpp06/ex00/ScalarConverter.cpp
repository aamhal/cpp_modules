/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 08:27:48 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/28 06:36:27 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include <cstdint>
#include <iomanip>
#include <ios>
#include <climits>

ScalarConverter::ScalarConverter() {};
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &S) {
	(void)S;
	return *this;
}
ScalarConverter::ScalarConverter(const ScalarConverter& S){
	*this = S;
}
ScalarConverter::~ScalarConverter(){};


int str_check(std::string input)
{
	if ((!std::isdigit(input[0]) && input.length() == 1))
		return 1;
	int len = input.length();
	int count = 0;
	int i = 0;
	if (input[i] == '-' || input[i] == '+')
		i++;
	while (i < len)
	{
		if (input[i] == '.')
			count++;
			i++;
	}
	if (count == 1 && input[len - 1] == 'f')
		return 2;
	i = 0;
	if (input[i] == '-' || input[i] == '+')
		i++;
	while (i < len)
	{
		if (!std::isdigit(input[i]) && input[i] != '.')
			return (0);
			i++;
	}
	if (count > 1)
		return (0);
	return 1;
}
	
double stringToDouble(const std::string &str) {
    std::istringstream iss(str);
    double result;
    iss >> result;
	if (iss.fail())
		std::cout << "char : impossible" << std::endl;
    return result;
}

void ScalarConverter::convert( std::string input) {
	if (input == "nan" || input == "nanf") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
		return ;
    }
	if (input == "+inf" || input == "+inff") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
		return ;
    }
	if (input == "-inf" || input == "-inff") {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
		return ;
    }

	double str = 0;
	int len = input.length();
	if (str_check(input) == 2)
		input = input.substr(0,len - 1);
	if (!str_check(input))
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : impossible" << std::endl;	
		return ;
	}
	if (!std::isdigit(input[0]) && input.length() == 1)
		str = static_cast<double>(input[0]);
	else	
	  str= stringToDouble(input);
	//char
	if ((std::isprint(static_cast<int>(str)) && str == static_cast<long>(str)))
		std::cout << "char : '" << static_cast<char>(str)<<  "'" <<std::endl;
	else if (!std::isprint(static_cast<int>(str)))
		std::cout << "char : Non displayable" << std::endl;
	else 
		std::cout << "char : impossible" << std::endl;
	//int 
	if (static_cast<long>(str) > INT_MAX || static_cast<long>(str) < INT_MIN)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(str)<< std::endl;
	//float 
	if ( str > 0 && (str > FLT_MAX || str < FLT_MIN))
		std::cout  << "float : impossible"  <<std::endl;
	else if (str < 0 && (str < -FLT_MAX || str > -FLT_MIN))
		std::cout << "float : impossible" << std::endl;
	else  if (abs(str) - abs(static_cast<long long>(str)) == 0)
		std::cout << "float : " << static_cast<float>(str) << ".0f"<< std::endl;
	else	
		std::cout << "float : " << static_cast<float>(str) << "f"<< std::endl;
	//double 
	if (str == static_cast<long>(str))
		std::cout  << "double : " << str << ".0"<<std::endl;
	else	
		std::cout << "double : " << str << std::endl;

	
}