/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 13:26:16 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/24 13:58:24 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// OCF

MateriaSource::MateriaSource() 
{
	for(int i = 0; i < MAX_INVENTORY; i++)
		this->_inventory[i] = NULL;
}
		
MateriaSource::MateriaSource(const MateriaSource &other)
{
	for(int i = 0; i < MAX_INVENTORY; i++)
		this->_inventory[i] = NULL;
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for(int i = 0; i < MAX_INVENTORY; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource() 
{
	for (int i = 0; i < MAX_INVENTORY; i++)
		delete this->_inventory[i];
}



// member functions:

// store the new AMateria pointer passed as param, stores in memory so it can be cloned later in createMateria()
void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < MAX_INVENTORY; i++)
	{
		if (this->_inventory[i] == NULL) // && this->_inventory[i] != m)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	delete m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < MAX_INVENTORY; i++)
	{
		if (this->_inventory[i] != NULL && type == this->_inventory[i]->getType())
			return this->_inventory[i]->clone();
	}
	return 0;
}

