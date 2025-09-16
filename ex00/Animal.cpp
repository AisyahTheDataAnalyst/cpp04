/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:39:51 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/16 10:45:10 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// OCF

Animal::Animal(): type("no specification")
{
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal( const Animal &other )
{
	*this = other;
	std::cout << "Animal: Copy constructor called" << std::endl;
}

Animal &Animal::operator=( const Animal &other )
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Animal: Assignment operator called" << std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called" << std::endl;
}



// Function member

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Generic animal sound" << std::endl;
}