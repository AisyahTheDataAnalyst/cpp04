/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:40:12 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/24 13:03:48 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// OCF

// for default constructor, compiler will automatically calls base default constructor if you dont specify it in the initializer list - still working the same
Dog::Dog() : Animal()
{
	std::cout << "Dog: Default constructor called" << std::endl;
	this->type = "Dog";
	dogBrain = new Brain();
}

Dog::Dog( const Dog &other )
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	dogBrain = new Brain();
	*this = other;
}

Dog &Dog::operator=( const Dog &other )
{
	std::cout << "Dog: Assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		*this->dogBrain = *other.dogBrain; // calls Brain's Copy assignment constructor
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
	delete this->dogBrain; // called Brain's Destructor
}

// Function member

std::string Dog::getType() const
{
	return (this->type);
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

void Dog::setIdea( int idx, const std::string &newIdea )
{
	if (idx >= 0 && idx < 100)
		dogBrain->setIdea(idx, newIdea);
}

std::string Dog::getIdea(int idx) const
{
	if (idx >= 0 && idx < 100)
		return dogBrain->getIdea(idx);
	return "[invalid index]";
}