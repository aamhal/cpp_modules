/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:03:29 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/13 09:20:37 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>
template <typename T>
void swap(T& a, T& b){
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b){
	if (a >= b)
		return b;
	else
		return a;
}

template <typename T>
T max(T a, T b){
	if (a >= b)
		return a;
	else
		return b;
}

#endif