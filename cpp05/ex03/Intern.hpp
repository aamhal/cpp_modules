/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 07:45:40 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/19 11:13:43 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include "AForm.hpp"

class Intern {
public:
    Intern();
    Intern(const Intern &other);
    Intern &operator=(const Intern &other);
    ~Intern();

    AForm* makeForm(const std::string &formName, const std::string &target);
};
