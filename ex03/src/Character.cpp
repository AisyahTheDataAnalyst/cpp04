/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:54:33 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/19 19:26:16 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// OCF

Character::Character(const std::string &name) : _unequipCounter(0), _name(name)
{
	for(int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_unequipStorage = new AMateria *[1000];
	for(int i = 0; i < 1000; i++)
		this->_unequipStorage[i] = NULL;
}
		
Character::Character(const Character &other)
{
	*this = other;
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		for(int i = 0; i < 4; i++)
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();	
			else
				this->_inventory[i] = NULL;
		}
		for(int i = 0; i < this->_unequipCounter; i++)
			delete this->_unequipStorage[i];
		this->_unequipCounter = 0;
	}
	return *this;
}

Character::~Character() 
{
	for(int i = 0; i < 4; i++)
		delete this->_inventory[i];
	for(int i = 0; i < _unequipCounter; i++)
		delete this->_unequipStorage[i];
	delete [] this->_unequipStorage;
}




// member function

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m) // equip in the 1st empty slot
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx) // should not delete Materia
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
	{
		this->_unequipStorage[_unequipCounter++] = this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}