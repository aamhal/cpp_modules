/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamhal <aamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 17:47:40 by aamhal            #+#    #+#             */
/*   Updated: 2024/01/21 18:03:07 by aamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
	AMateria *LearnMatirias[4];
	int		countLearned;
	public:
	MateriaSource();
	MateriaSource(const MateriaSource &ma);
	MateriaSource& operator=(const MateriaSource &ma);
	~MateriaSource();
	void learnMateria(AMateria* m);
	AMateria *createMateria(std::string const &type);
	
};

#endif