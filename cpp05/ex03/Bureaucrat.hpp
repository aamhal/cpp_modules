/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:05:22 by aamhal            #+#    #+#             */
/*   Updated: 2024/06/03 09:45:11 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include "AForm.hpp"

class AForm;

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
    class FormNotSignedException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
	void signForm(std::string name, bool f);
	void executeForm(AForm const & f);
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const &b);





#endif