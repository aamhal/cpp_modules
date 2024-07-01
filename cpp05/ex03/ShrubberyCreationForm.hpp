/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 09:12:51 by aamhal            #+#    #+#             */
/*   Updated: 2024/06/03 09:45:31 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "AForm.hpp"

class ShrubberyCreationForm :  public  AForm
{
private:
	std::string FormTarget;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string const n);
	ShrubberyCreationForm(const ShrubberyCreationForm& f);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& f);
	virtual~ShrubberyCreationForm();
	void execute(Bureaucrat const & b) const;
};



#endif