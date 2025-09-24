/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:40:00 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/24 13:03:34 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// OCF

// for default constructor, compiler will automatically calls base default constructor if you dont specify it in the initializer list - still working the same
Cat::Cat() : Animal()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	this->type = "Cat";
	catBrain = new Brain();
}

Cat::Cat( const Cat &other )
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	catBrain = new Brain();
	*this = other;
}

Cat &Cat::operator=( const Cat &other )
{
	std::cout << "Cat: Assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		*this->catBrain = *other.catBrain;  // calls Brain's Copy assignment constructor
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
	delete this->catBrain; // calls Brain's Destructor
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

void Cat::setIdea( int idx, const std::string &newIdea )
{
	if (idx >= 0 && idx < 100)
		catBrain->setIdea(idx, newIdea);
}

std::string Cat::getIdea(int idx) const
{
	if (idx >= 0 && idx < 100)
		return catBrain->getIdea(idx);
	return "[invalid index]";
}