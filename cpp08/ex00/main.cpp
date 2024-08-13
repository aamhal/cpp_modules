/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 08:19:08 by aamhal            #+#    #+#             */
/*   Updated: 2024/08/05 08:23:28 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int main() {
    std::vector<int> data;
    data.push_back(10);
    data.push_back(20);
    data.push_back(30);
    data.push_back(40);
    data.push_back(50);
    
    try {
         std::vector<int>::iterator v = easyfind(data, 20);
        std::cout << "Element found at position: " << std::distance(data.begin(), v) << std::endl;
    } catch (const NotFoundException& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}