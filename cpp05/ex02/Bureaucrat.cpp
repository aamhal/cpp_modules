/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:05:28 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/20 07:49:34 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150) {};
Bureaucrat& Bureaucrat::operator=(const Bureaucrat &b) {
	if (this != &b)
	{
		const_cast<std::string&>(this->name) = b.name;
		this->grade = b.grade;
	}
	return *this;
}
Bureaucrat::Bureaucrat(const Bureaucrat& b){
	*this = b;
}
Bureaucrat::~Bureaucrat(){};

Bureaucrat::Bureaucrat(const std::string& name , int grade) : name(name) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->grade = grade;
}


void Bureaucrat::setName(std::string const name){
	const_cast<std::string&>(this->name) = name;
}
void Bureaucrat::setGrade(int grade){
	this->grade = grade;
}
std::string Bureaucrat::getName() const {return this->name;}
int Bureaucrat::getGrade() const {return this->grade;}

std::ostream& operator<<(std::ostream& out,Bureaucrat const& b){
	out << "name is " << b.getName() << ", grade is " << b.getGrade() << std::endl;
	return (out);
}

void Bureaucrat::incrementGrade(){
	if (grade == 1)
		throw GradeTooHighException();
	else
		grade--;
}
void Bureaucrat::decrementGrade(){
	if (grade == 150)
		throw GradeTooLowException();
	else
		grade++;

}

const char* Bureaucrat::GradeTooHighException::what() const throw() {return "Grade too high";}
const char* Bureaucrat::GradeTooLowException::what() const throw() {return "Grade too low";}
const char* Bureaucrat::FormNotSignedException::what() const throw() {return "Grade not signed";}

void Bureaucrat::signForm(AForm &f){
	if (f.getSign())
	{
		std::cout << this->name << " signed " << f.getName() << std::endl;
		
	}
	else 
	{
		std::cout << this->name << " couldn’t sign " << f.getName() << " because " << this->name << " grade too low" << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & f) {
    try {
        f.execute(*this);
        std::cout << name << " executed " << f.getName() << "\n";
    } catch (std::exception& e) {
        std::cout << name << " cannot execute " << f.getName() << " because " << e.what() << "\n";
    }
}