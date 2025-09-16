/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:39:51 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/16 10:59:05 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// OCF

WrongAnimal::WrongAnimal(): type("wrong specification")
{
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &other )
{
	*this = other;
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &other )
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "WrongAnimal: Assignment operator called" << std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}



// Function member

std::string WrongAnimal::getType() const
{
	return (this->type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Generic wrong animal sound" << std::endl;
}