/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:06:52 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/18 11:38:21 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// OCF

Cure::Cure() : AMateria(), _type("cure") {}
// {
// 	this->_type = "cure";
// }
		
Cure::Cure(const Cure &other)
{
	*this = other;
}

Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Cure::~Cure() {}


// member functions:

Cure *Cure::clone() const
{
	return new Cure();
}


void Cure::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target << std::endl;
}