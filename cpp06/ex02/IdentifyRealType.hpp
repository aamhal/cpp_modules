/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IdentifyRealType.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 08:26:50 by aamhal            #+#    #+#             */
/*   Updated: 2024/07/11 07:46:54 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFYREALTYPE_H
#define IDENTIFYREALTYPE_H
#include <iostream>
#include <cstdlib>
#include <ctime>
class Base
{
public :
	virtual~Base();
};


class A : public Base {};
class B : public Base {};
class C : public Base {};

void identify(Base* p);
void identify(Base& p);
Base* generate();


#endif
