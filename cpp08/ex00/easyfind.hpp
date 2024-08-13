/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 08:18:56 by aamhal            #+#    #+#             */
/*   Updated: 2024/08/05 08:22:13 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include <vector>
#include <algorithm> 
#include <exception>

class NotFoundException : public std::exception {
public:
    const char* what() const throw() {
        return "Element not found in the container";
    }
};

template<typename T>
typename T::iterator easyfind(T& container, int value) {
    typename T::iterator v = std::find(container.begin(), container.end(), value);
    if (v == container.end())
        throw NotFoundException();
    return v;
}
