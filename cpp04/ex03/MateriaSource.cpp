/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:54:26 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/21 20:09:39 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"


MateriaSource::MateriaSource() : countLearned(0)
{
	for (int i = 0; i < 4; ++i)
	{
		LearnMatirias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource& ma){
	for (int i = 0; i < 4; ++i)
		LearnMatirias[i] = NULL;
	*this = ma;
}
MateriaSource& MateriaSource::operator=(const MateriaSource& ma){
	if (this != &ma)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete LearnMatirias[i];
			LearnMatirias[i] = NULL;
		}
		LearnMatirias[0] = ma.LearnMatirias[0];
		LearnMatirias[1] = ma.LearnMatirias[1];
		LearnMatirias[2] = ma.LearnMatirias[2];
		LearnMatirias[3] = ma.LearnMatirias[3];
	}
	return *this;
}
MateriaSource::~MateriaSource(){
for (int i = 0; i < countLearned; ++i)
	delete LearnMatirias[i];}


void MateriaSource::learnMateria(AMateria *m) 
{
	if (countLearned < 4)
	{
		LearnMatirias[countLearned++] = m;
		return ;
	}
	delete m;
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < countLearned; ++i)
	{
		if (LearnMatirias[i]->getType() == type)
		{
			return LearnMatirias[i]->clone();
		}
	}
	return NULL;
}
