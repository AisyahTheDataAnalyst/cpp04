/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:07:55 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/18 11:38:00 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

// OCF

Ice::Ice() : AMateria(), _type("ice") {}
// {
// 	this->_type = "ice";
// }
		
Ice::Ice(const Ice &other)
{
	*this = other;
}

Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

Ice::~Ice() {}



// member functions:

Ice *Ice::clone() const
{
	return new Ice;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* heals " << target << "'s wounds *" << std::endl;
}