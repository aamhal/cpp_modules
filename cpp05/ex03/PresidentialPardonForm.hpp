/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 09:23:42 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/19 11:13:51 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include "AForm.hpp"

class PresidentialPardonForm :  public  AForm
{
private:
	std::string FormTarget;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string const n);
	PresidentialPardonForm(const PresidentialPardonForm& f);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& f);
	virtual~PresidentialPardonForm();
	void execute(Bureaucrat const& b) const;
};

