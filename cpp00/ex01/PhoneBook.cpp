/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:07:51 by aamhal            #+#    #+#             */
/*   Updated: 2023/12/23 11:14:37 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::setPhoneBook(int i, Contact &c){
	Cont[i] = c;
}

Contact PhoneBook::getPhoneBook(int i){
	return (Cont[i]);
}

