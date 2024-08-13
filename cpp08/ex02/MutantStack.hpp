/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 08:36:23 by aamhal            #+#    #+#             */
/*   Updated: 2024/08/11 08:53:03 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <deque>
#include <stack>
#include <iostream>

template<typename T, typename C = std::deque<T> >


class MutantStack : public std::stack<T , C> {
public:
    typedef typename C::iterator iterator;

    MutantStack();
    MutantStack(const MutantStack &src);
    MutantStack& operator=(const MutantStack &rhs);
    virtual ~MutantStack();

    iterator begin();

    iterator end();
    };

	
	template<typename T, typename C>
	MutantStack<T,  C>::MutantStack() {}
	
	template<typename T, typename C>
	
    MutantStack<T,  C>::MutantStack(const MutantStack &src) : std::stack<T>(src) {}
	template<typename T, typename C>

	MutantStack<T, C> &MutantStack<T, C>::operator=(MutantStack const & src)
{
	if (this != &src)
		std::stack<T, C>::operator=(src);
	return *this;
}

template <typename T, typename C>
MutantStack<T, C>::~MutantStack(){}

template <typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::begin()
{
	return this->c.begin();
}

template <typename T, typename C>
typename MutantStack<T, C>::iterator MutantStack<T, C>::end()
{
	return this->c.end();
}