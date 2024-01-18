/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 16:05:58 by aamhal            #+#    #+#             */
/*   Updated: 2023/12/21 09:13:28 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
	
void Contact::setFirstName(std::string s){
	FirstName = s;
}
void Contact::setLastName(std::string s){
	LastName = s;
}
void Contact::setNickName(std::string s){
	NickName = s;
}
void Contact::setPhoneNumber(std::string s){
	PhoneNumber = s;
}
void Contact::setDarckestSecret(std::string s){
	DarckestSecret = s;
}

std::string Contact::getFirstName() {return FirstName;}
std::string Contact::getLastName() {return LastName;}
std::string Contact::getNickName() {return NickName;}
std::string Contact::getPhoneNumber() {return PhoneNumber;}
std::string Contact::getDarckestSecret() {return DarckestSecret;}
