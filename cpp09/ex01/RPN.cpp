/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:59:23 by aamhal            #+#    #+#             */
/*   Updated: 2024/09/12 08:00:14 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cctype>
#include <climits>
#include <cstddef>
#include <iostream>
#include <istream>
#include <sstream>
#include <limits>

RPN::RPN() {};
RPN::RPN(const std::string &arg) :argument(arg){};

RPN::RPN(const RPN &rpn){
	*this = rpn;
};
RPN& RPN::operator=(const RPN &rpn){
	if (this != &rpn){
		this->stack = rpn.stack;
		this->argument = rpn.argument;
	}
	return *this;
};
RPN::~RPN(){};


int RPN::parcing(std::string arg){
	for(size_t i =0; i < arg.length(); i++){
		if (!std::isdigit(arg[i])  && arg[i] != ' ' && arg[i] != '+' && arg[i] != '-' && arg[i] != '*' && arg[i] != '/')
			return 1;
		if (isdigit(arg[i]) && std::isdigit(arg[i + 1]))
			return 1;
	}
	return 0;
}


void RPN::calculate(){
	if (parcing(argument)){
		std::cerr << "Error" << std::endl;
		return ;
	}
	std::istringstream ss(argument);
	double  a,b,c;
	std::string nbr;
	while (ss >> nbr){
		if (nbr == "+" || nbr == "-" || nbr == "*" || nbr == "/"){
			if (this->stack.size() < 2){
				std::cerr << "Error" << std::endl;
				return ;	
			}
			a = this->stack.top();
			this->stack.pop();
			b = this->stack.top();
			this->stack.pop();
			if (nbr == "+")
				c = b + a;
			else if (nbr == "-")
				c = b - a;
			else if (nbr == "*")
				c = b * a;
			else if (nbr == "/"){
				if (a == 0){
					std::cerr << "Error : can't divide by 0` " << std::endl;
					return ;
				}
				c = b / a;
			}
			if (c > INT_MAX || c < INT_MIN)
			{
				std::cerr << "Error : overflow" << std::endl;
					return ;
			}
			this->stack.push(c);
		}
		else{
			int tmp = std::atoi(nbr.c_str());
			if (tmp > 10){
				std::cerr << "Error" << std::endl;
				return ;
			}
			this->stack.push(tmp);
		}
	}
	if (this->stack.size() != 1){
		std::cerr << "Error" << std::endl;
		return ;
		
	}
	std::cout << this->stack.top() << std::endl;
}
