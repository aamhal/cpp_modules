/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 09:23:42 by aamhal            #+#    #+#             */
/*   Updated: 2024/06/03 09:45:25 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

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



#endif
