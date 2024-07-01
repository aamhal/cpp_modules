/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 07:24:15 by aamhal            #+#    #+#             */
/*   Updated: 2024/03/25 17:26:02 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Form
{
private:
	std::string const name;
	bool signe;
	int const signGrade;
	int const execGrade;
public:
	Form();
	Form(std::string const name, int const signGrade, int const execGrade);
	Form(const Form& f);
	Form& operator=(const Form& f);
	~Form();

	
	std::string  getName() const;
    bool getSign() const ;
	int getSignGrade() const ;
	int getExecGrade() const ;
	
	void beSigned(Bureaucrat const& b);



	
	class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, Form const &f);

#endif