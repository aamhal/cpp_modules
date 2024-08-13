/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:09:48 by aamhal            #+#    #+#             */
/*   Updated: 2024/08/06 20:20:17 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <vector>
#include <climits>
#include <stdexcept>
#include <iostream>



class Span {
	private:
		std::vector<int> v;
		unsigned int n;
	public:
	Span();
	Span(unsigned int nbr);
	Span(const Span &S);
	Span& operator=(const Span &s);
	~Span();

	void addNumber(int nbr);
	int shortestSpan();
	int longestSpan();
	
	class size_excep : public std::exception{
		virtual const char* what() const throw();
	};
	class noSpan_excep : public std::exception{
		virtual const char* what() const throw();
	};
};