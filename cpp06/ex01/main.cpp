/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:18:05 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/10 08:21:40 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main() {
    Data data;
    data.nbr = 42;
    data.text = "Hello, World!";

    // Serialize
    uintptr_t raw = Serialization::serialize(&data);

    // Deserialize
    Data* dataPtr = Serialization::deserialize(raw);

    // Check if deserialization is correct
    if (dataPtr == &data) {
        std::cout << "Serialization and deserialization successful!" << std::endl;
        std::cout << "nbr: " << dataPtr->nbr << std::endl;
        std::cout << "Text: " << dataPtr->text << std::endl;
    } else {
        std::cout << "Serialization and deserialization failed!" << std::endl;
    }

    return 0;
}