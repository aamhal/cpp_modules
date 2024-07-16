/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 09:21:56 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/01 11:23:02 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm() {};

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &f){
	this->FormTarget = f.FormTarget;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& f){ 
		*this = f;
}
RobotomyRequestForm::~RobotomyRequestForm() {};


RobotomyRequestForm::RobotomyRequestForm(std::string const n) : AForm(n, 137, 145) {};  
void RobotomyRequestForm::execute(Bureaucrat const & b) const {
    if (!getSign())
        throw FormNotSignedException();
    if (b.getGrade() > getExecGrade())
        throw GradeTooLowException();
    std::srand(time(NULL));
   if (rand() % 2)
        std::cout << this->getName() << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->getName() << " has not been robotomized successfully" << std::endl;
}