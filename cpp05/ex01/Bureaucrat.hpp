/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:05:22 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/19 11:09:21 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
private:
	std::string const name;
	int grade;
public:
	Bureaucrat();
	Bureaucrat(const std::string& name , int grade);
	Bureaucrat(const Bureaucrat& b);
	Bureaucrat& operator=(const Bureaucrat& b);
	~Bureaucrat();
	void setName(std::string const name);
	void setGrade(int grade);
	std::string  getName() const;
	int  getGrade() const;
	void incrementGrade();
	void decrementGrade();

	
	class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
	void signForm(Form &f);
	
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const &b);

