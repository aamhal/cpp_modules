/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 07:31:10 by aamhal            #+#    #+#             */
/*   Updated: 2024/03/25 17:32:42 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("Default") , signe(false) , signGrade(150) , execGrade(150) {};

Form& Form::operator=(const Form &f){
	if (this != &f)
	{
		const_cast<std::string&>(this->name) = f.name;
		this->signe = f.signe;
		const_cast<int&>(this->signGrade)= f.signGrade;
		const_cast<int&>(this->execGrade) = f.execGrade;
	}
	return *this;
}

Form::Form(const Form& f) :name(f.name), signe(f.signe) ,signGrade(f.signGrade), execGrade(f.execGrade){ 
	if (f.signGrade < 1 || f.execGrade < 1)
		throw Form::GradeTooHighException();
	else if (f.signGrade > 150 || f.execGrade > 150)
		throw Form::GradeTooLowException();
	else
		*this = f;
}

Form::~Form(){};

Form::Form(std::string const name, int const signGrade, int const execGrade) : name(name), signe(false) ,signGrade(signGrade), execGrade(execGrade){
	if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

std::string Form::getName() const {
	return name;
}

bool Form::getSign() const {
	return signe;
}

int Form::getSignGrade() const {
	return signGrade;
}

int Form::getExecGrade() const {
	return execGrade;
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= signGrade)
        signe = true;
    else
        throw GradeTooLowException();
}


const char* Form::GradeTooHighException::what() const throw() {return "Grade too high";}
const char* Form::GradeTooLowException::what() const throw() {return "Grade too low";}

std::ostream& operator<<(std::ostream& out,Form const& f){
	out << "name is" << f.getName() 
	<< ", signe is" << f.getSign() 
	<< " signGrade is" << f.getSignGrade()
	<< " execGrade is" << f.getExecGrade()
	<< std::endl;
	return (out);
}