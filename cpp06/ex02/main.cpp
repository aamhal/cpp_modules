/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 07:44:17 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/11 07:45:16 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "IdentifyRealType.hpp"

int main() {
    Base* basePtr = generate();

    identify(basePtr);
    identify(*basePtr);

    delete basePtr;

    return 0;
}