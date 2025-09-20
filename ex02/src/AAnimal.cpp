/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:39:51 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/20 14:23:34 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// OCF

AAnimal::AAnimal(): type("no specification")
{
	std::cout << "AAnimal: Default constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal &other )
{
	*this = other;
	std::cout << "AAnimal: Copy constructor called" << std::endl;
}

AAnimal &AAnimal::operator=( const AAnimal &other )
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "AAnimal: Assignment operator called" << std::endl;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal: Destructor called" << std::endl;
}



// Function member

std::string AAnimal::getType() const
{
	return (this->type);
}

// void AAnimal::makeSound() const
// {
// 	std::cout << "Generic animal sound" << std::endl;
// }
// can define pure virtual fn in .cpp but no need
// , they are meant to be overriden in derived class