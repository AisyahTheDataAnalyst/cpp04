/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 17:54:33 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/18 19:04:31 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int _currIdx = 0;

// OCF

Character::Character(std::string &name) : ICharacter()
{
	if (_currIdx >= 0 && _currIdx < MAX_INVENTORY)
	{
		this->_name = name;
		this->_idx = _currIdx; // % MAX_INVENTORY;
		++_currIdx;
	}
}
		
Character::Character(const Character &other)
{
	*this = other;
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		delete [] this->_inventory[4];
		this->_name = other._name;
		this->_idx = other._idx;
		this->_currIdx = other._currIdx;
	}
	return *this;
}

Character::~Character() 
{
	delete this->_inventory[this->_idx];
}




// member function

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria *m) // equip in the 1st empty slot
{
	if (_currIdx >= 0 && _currIdx < MAX_INVENTORY)
		this->_inventory[this->_idx] = m;
}

void Character::unequip(int idx) // should not delete Materia
{
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	std::cout << this->_inventory[idx]->use(target) << std::endl;
}