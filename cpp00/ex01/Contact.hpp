/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:36:09 by aamhal            #+#    #+#             */
/*   Updated: 2023/12/21 11:38:48 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>


class Contact
{
private:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarckestSecret;
public:
	void setFirstName(std::string s);
	void setLastName(std::string s);
	void setNickName(std::string s);
	void setPhoneNumber(std::string s);
	void setDarckestSecret(std::string s);
	
	std::string getFirstName();
	std::string getLastName();
	std::string getNickName();
	std::string getPhoneNumber();
	std::string getDarckestSecret();
} ;


#endif