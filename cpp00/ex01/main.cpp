/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:42:56 by aamhal            #+#    #+#             */
/*   Updated: 2023/12/23 13:13:42 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"


std::string ReadInput(std::string Input)
{
	std::string s;	
	while(1)
	{
		std::cout << Input;
		getline(std::cin , s);
		if (!s.empty())
			break ;
		if (feof(stdin))
		{
			std::cin.clear();
			clearerr(stdin);
			std::cout << std::endl;
		}
	}
	return (s);	
}

PhoneBook NewContact(PhoneBook PBook)
{
	static int i = 0;
	
	if (i < 8)
	{
		Contact NewContact;
		NewContact.setFirstName(ReadInput("	Firstname :"));
		NewContact.setLastName(ReadInput("	Lastname :"));
		NewContact.setNickName(ReadInput("	Nickname :"));
		NewContact.setPhoneNumber(ReadInput("	Phonenumber :"));
		NewContact.setDarckestSecret(ReadInput("	Darkestsecret :"));
		PBook.setPhoneBook(i, NewContact);
		i++;
	}
	if (i == 8)
		i = 0;
	
	return (PBook);
}

std::string resize_column(std::string str)
{
	int len = str.size();
	if (len < 10)
	{
		while(len < 10)
		{
			str = str + " ";
			len++;
		}
	}
	else if (len > 10)
	{
		str = str.substr(0, 9);
		str = str + ".";
	}
		
	return (str);
}

void DisplayInfo(Contact c)
{
	std::cout << "	Firstname :" << c.getFirstName() << std::endl;
	std::cout << "	Lastname :" << c.getLastName() << std::endl;
	std::cout << "	Nickname :" << c.getNickName() << std::endl;
	std::cout << "	Phone number :" << c.getPhoneNumber() << std::endl;
	std::cout << "	Darkest secret :" << c.getDarckestSecret() << std::endl;
}


void ContactDisplay(Contact c, int  index)
{
	std::string s1 =resize_column(c.getFirstName());
	std::string s2 =resize_column(c.getLastName());
	std::string s3 = resize_column(c.getNickName());
	std::cout << index << "         |";
	std::cout << s1 << "|";
	std::cout << s2 << "|";
	std::cout << s3 << std::endl;
}

void IndexDisplay(PhoneBook PBook, int i)
{
	std::string Command = ReadInput("Write an index ");
	if (Command.size() != 1 || !isdigit(Command[0]))
		std::cout << "Wrong index!" << std::endl;
	else{
		int j = atoi(Command.c_str());
		if (j < i)
			DisplayInfo(PBook.getPhoneBook(j));
		else
			std::cout << "Wrong index!" << std::endl;
	}
}	

int main()
{
	PhoneBook  PBook;
	static int i = 0;
	std::string Command;
	while(1)
	{
		Command = ReadInput("Write a command(ADD, SEARCH or EXIT) :");
		if (Command == "EXIT")
			exit(0);
		if (Command == "ADD")
		{
			PBook = NewContact(PBook);
			i++;
			if (i == 9)
				i--;
		}
		if (Command == "SEARCH")
		{
			if (i == 0)
				std::cout << "Phonebook is empty" << std::endl;
			else 
			{
				int j  = 0;
				while(j < i)
				{
					std::cout << "index     |";
					std::cout << "First name|";
					std::cout << "Last name |";
					std::cout << "Nickname  " << std::endl;
					ContactDisplay(PBook.getPhoneBook(j), j);
					j++;	
				}
				IndexDisplay(PBook, i);
			}
		}
	}
	return (0);
}