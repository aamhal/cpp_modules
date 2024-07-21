/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 07:24:15 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/19 11:14:29 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class AForm
{
private:
	std::string const name;
	bool signe;
	int const signGrade;
	int const execGrade;
public:
	AForm();
	AForm(std::string const name, int const signGrade, int const execGrade);
	AForm(const AForm& f);
	AForm& operator=(const AForm& f);
	virtual~AForm();

	
	std::string  getName() const;
    bool getSign() const ;
	int getSignGrade() const ;
	int getExecGrade() const ;
	
	void beSigned(Bureaucrat const& b);
	virtual void execute(Bureaucrat const& b) const = 0;


	
	class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class FormNotSignedException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, AForm const &f);

