/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 07:55:12 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/11 08:11:20 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_H
#define SERIALIZATION_H

#include <iostream>

struct Data
{
	int nbr;
	std::string text;
};

class Serialization
{
private:
	Serialization();
public:
	Serialization(Serialization& S);
	Serialization &operator=(Serialization &s);
	~Serialization();
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};


#endif