/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:40:12 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/17 10:01:42 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// OCF

// for default constructor, compiler will automatically calls base default constructor if you dont specify it in the initializer list - still working the same
Dog::Dog() : Animal(), type("dog")
{
	std::cout << "Dog: Default constructor called" << std::endl;
	dogBrain = new Brain();
}

Dog::Dog( const Dog &other )
{
	*this = other;
	std::cout << "Dog: Copy constructor called" << std::endl;
}

Dog &Dog::operator=( const Dog &other )
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "Dog: Assignment operator called" << std::endl;
	return *this;
}

Dog::~Dog()
{
	delete dogBrain;
	std::cout << "Dog: Destructor called" << std::endl;
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