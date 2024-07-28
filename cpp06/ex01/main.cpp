/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:18:05 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/25 19:02:12 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include <sys/types.h>
#include <thread>


int main() {
    Data data;
    data.nbr = 42;
    data.text = "Hello, World!";

    uintptr_t raw = Serialization::serialize(&data);
    Data* dataPtr = Serialization::deserialize(raw);

    if (dataPtr == &data) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
        std::cout << "nbr: " << dataPtr->nbr << std::endl;
        std::cout << "Text: " << dataPtr->text << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }
    std::cout << dataPtr << std::endl;

    return 0;
}