/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 09:18:10 by aamhal            #+#    #+#             */
/*   Updated: 2024/06/03 09:46:01 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {};

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f){
	this->FormTarget = f.FormTarget;
	return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& f){ 
		*this = f;
}
ShrubberyCreationForm::~ShrubberyCreationForm() {};


ShrubberyCreationForm::ShrubberyCreationForm(std::string const n) : AForm(n, 137, 145) {};

void ShrubberyCreationForm::execute(Bureaucrat const & b) const {
    if (!getSign())
        throw FormNotSignedException();
    if (b.getGrade() > getExecGrade())
        throw GradeTooLowException();
}