/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:40:00 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/20 11:07:39 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// OCF

// for default constructor, compiler will automatically calls base default constructor if you dont specify it in the initializer list - still working the same
WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "definitely not a cat";
	std::cout << "WrongCat: Default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat &other )
{
	*this = other;
	std::cout << "WrongCat: Copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat &other )
{
	if (this != &other)
	{
		this->type = other.type;
	}
	std::cout << "WrongCat: Assignment operator called" << std::endl;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called" << std::endl;
}



// Function member

std::string WrongCat::getType() const
{
	return (this->type);
}

void WrongCat::makeSound() const
{
	std::cout << "Bark!" << std::endl;
}