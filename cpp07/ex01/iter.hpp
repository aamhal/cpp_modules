/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:21:47 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/13 09:33:43 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>
template <typename T, typename F>
void iter(T *p, int len,F &func){
	for(int i = 0;i < len; i++ ){
		func(p[i]);
	}
}




#endif