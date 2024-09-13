/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 14:53:00 by aamhal            #+#    #+#             */
/*   Updated: 2024/09/11 03:07:09 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>
class RPN {
	private:
		std::stack<double > stack;
		std::string argument;
	public:
	RPN();
	RPN(const std::string &arg);
	RPN(const RPN &rpn);
	RPN& operator=(const RPN &rpn);
	~RPN();
	int parcing(std::string arg);
	void calculate();
};