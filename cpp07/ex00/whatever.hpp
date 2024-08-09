/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:03:29 by aamhal            #+#    #+#             */
/*   Updated: 2024/08/09 07:36:06 by aamhal           ###   ########.fr       */
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
	if (a < b)
		return a;
	else
		return b;
}

template <typename T>
T max(T a, T b){
	if (a > b)
		return a;
	else
		return b;
}

#endif