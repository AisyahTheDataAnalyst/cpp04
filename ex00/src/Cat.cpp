/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:40:00 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/20 11:07:12 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// OCF

// for default constructor, compiler will automatically calls base default constructor if you dont specify it in the initializer list - still working the same
Cat::Cat() : Animal()
{
	this->type = "Cat";
	std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat( const Cat &other )
{
	*this = other;
	std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat &Cat::operator=( const Cat &other )
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Cat: Assignment operator called" << std::endl;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
}



// Function member

std::string Cat::getType() const
{
	return (this->type);
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}