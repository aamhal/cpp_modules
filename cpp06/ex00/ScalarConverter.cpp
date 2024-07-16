/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 08:27:48 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/03 08:09:54 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {};
ScalarConverter& ScalarConverter::operator=(const ScalarConverter &S) {
	(void)S;
	return *this;
}
ScalarConverter::ScalarConverter(const ScalarConverter& S){
	*this = S;
}
ScalarConverter::~ScalarConverter(){};



void ScalarConverter::convert(const std::string& input) {
	double tmp;
    if (input.length() > 1 && !std::isdigit(input[0]))
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" <<std::endl;
    	std::cout << "double: impossible" << std::endl;
        return ;
    }
        
	if (input.length() == 1 && std::isprint(input[0]) && !std::isdigit(input[0])) {
    	tmp = static_cast<double>(input[0]);
    } else {
        tmp = std::stod(input);
    }
	
	//char convert
	std::cout << "char: ";
	if (std::isnan(tmp) || std::isinf(tmp) || tmp < std::numeric_limits<char>::min() || tmp > std::numeric_limits<char>::max()) {
        std::cout << "impossible" << std::endl;
    } else {
        char c = static_cast<char>(tmp);
        if (std::isprint(c))
            std::cout << "'" << c << "'" << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
	//int convert
	std::cout << "int: ";
	if (std::isnan(tmp) || std::isinf(tmp) || tmp < std::numeric_limits<char>::min() || tmp > std::numeric_limits<char>::max()) {
        std::cout << "impossible" << std::endl;
    } else {
		int i = static_cast<int>(tmp);
		std::cout << i << std::endl;
    }
	// float convert
	std::cout << "float: ";
	if (std::isnan(tmp)) {
        std::cout << "nanf" << std::endl;
    } else if (std::isinf(tmp)) {
        std::cout << (tmp > 0 ? "+inff" : "-inff") << std::endl;
    } else {
		float i = static_cast<float>(tmp);
		std::cout << std::fixed << std::setprecision(1) << i << "f" << std::endl;
    }
	// double convert
	std::cout << "double: ";
	if (std::isnan(tmp)) {
        std::cout << "nan" << std::endl;
    } else if (std::isinf(tmp)) {
        std::cout << (tmp > 0 ? "+inf" : "-inf") << std::endl;
    } else {
		std::cout << std::fixed << std::setprecision(1) << tmp << std::endl;
    }
	
}