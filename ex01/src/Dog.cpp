/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:40:12 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/20 14:06:45 by aimokhta         ###   ########.fr       */
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
	*this = other;
}

Dog &Dog::operator=( const Dog &other )
{
	std::cout << "Dog: Assignment operator called" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		delete this->dogBrain; // called Brain's Destructor
		this->dogBrain = new Brain(*other.dogBrain); // call Brain's Copy constructor
		// deep copy = each object has its own Brain on the heap, copying other's Brain, not both point on the same Brain.

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

void Dog::setIdea( const std::string &newIdea )
{
	dogBrain->setIdea(newIdea);
}

std::string Dog::getIdea() const
{
	return dogBrain->getIdea();
}