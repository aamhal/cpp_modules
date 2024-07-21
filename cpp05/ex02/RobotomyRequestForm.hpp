/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 09:21:39 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/19 11:13:14 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"

class RobotomyRequestForm :  public  AForm
{
private:
	std::string  FormTarget;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string const n);
	RobotomyRequestForm(const RobotomyRequestForm& f);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& f);
	virtual~RobotomyRequestForm();
	void execute(Bureaucrat const & b) const;

};

