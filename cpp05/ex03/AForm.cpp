/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 07:31:10 by aamhal            #+#    #+#             */
/*   Updated: 2024/03/31 09:03:35 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name("Default") , signe(false) , signGrade(150) , execGrade(150) {};

AForm& AForm::operator=(const AForm &f){
	if (this != &f)
	{
		const_cast<std::string&>(this->name) = f.name;
		this->signe = f.signe;
		const_cast<int&>(this->signGrade)= f.signGrade;
		const_cast<int&>(this->execGrade) = f.execGrade;
	}
	return *this;
}

AForm::AForm(const AForm& f) :name(f.name), signe(false) ,signGrade(f.signGrade), execGrade(f.execGrade){ 
	if (f.signGrade < 1 || f.execGrade < 1)
		throw AForm::GradeTooHighException();
	else if (f.signGrade > 150 || f.execGrade > 150)
		throw AForm::GradeTooLowException();
	else
		*this = f;
}

AForm::~AForm(){};

AForm::AForm(std::string const name, int const signGrade, int const execGrade) : name(name), signe(false) ,signGrade(signGrade), execGrade(execGrade){
	if (signGrade < 1 || execGrade < 1)
		throw AForm::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw AForm::GradeTooLowException();
}

std::string AForm::getName() const {
	return name;
}

bool AForm::getSign() const {
	return signe;
}

int AForm::getSignGrade() const {
	return signGrade;
}

int AForm::getExecGrade() const {
	return execGrade;
}

void AForm::beSigned(const Bureaucrat& bureaucrat) {
    if (bureaucrat.getGrade() <= signGrade)
        signe = true;
    else
        throw GradeTooLowException();
}


const char* AForm::GradeTooHighException::what() const throw() {return "Grade too high";}
const char* AForm::GradeTooLowException::what() const throw() {return "Grade too low";}
const char* AForm::FormNotSignedException::what() const throw() {return "Grade not signed";}

std::ostream& operator<<(std::ostream& out,AForm const& f){
	out << "name is" << f.getName() 
	<< ", signe is" << f.getSign() 
	<< " signGrade is" << f.getSignGrade()
	<< " execGrade is" << f.getExecGrade()
	<< std::endl;
	return (out);
}