/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 09:24:28 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/01 11:25:19 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm() {};

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &f){
	this->FormTarget = f.FormTarget;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& f){ 
		*this = f;
}
PresidentialPardonForm::~PresidentialPardonForm() {};

PresidentialPardonForm::PresidentialPardonForm(std::string const n) : AForm(n, 137, 145) {};

void PresidentialPardonForm::execute(Bureaucrat const& b) const{
	if (!getSign())
        throw FormNotSignedException();
    if (b.getGrade() > getExecGrade())
        throw GradeTooLowException();
		std::cout  << b.getName() <<" has been pardoned by Zaphod Beeblebrox." << std::endl;
}