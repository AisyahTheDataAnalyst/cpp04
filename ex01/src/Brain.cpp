/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:39:11 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/24 14:08:23 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// OCF

Brain::Brain() 
// : ideas[0]("Random thoughts")
// connot do at initializer list 
// because youre doing a single element of an array, 
// when you should do it for entire members not parts of them only
// the only way to assign a raw array (ideas[100]) is inside {}
// use std::array<std::string, 100> ideas; to be able to do in the initializer list, instead of raw array
{
	std::cout << "Brain: Default constructor called" << std::endl;
	// for (int i = 0; i < 100; i++)
	// 	this->ideas[i] = "";
	// above is redundant, default constructor of std::string's class defines them as empty string ("") already
	// when you create an array of std::string, each one is default-constructed
	this->ideas[0] = "Random thoughts 1";
	this->ideas[1] = "Random thoughts 2";
	this->ideas[2] = "Random thoughts 3";
}

Brain::Brain( const Brain &other )
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=( const Brain &other )
{
	std::cout << "Brain: Assignment operator called" << std::endl;
	if (this != &other)
	{
		// this->ideas[100] = other.ideas[100]; - SEGV, not specific to each of the slots
		for (int i = 0; i < 100; i++)
			this->ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
}

// setter & getter

void Brain::setIdea(int idx, const std::string &newIdea)
{
	if (idx >= 0 && idx < 100)
		this->ideas[idx] = newIdea;
}

std::string Brain::getIdea( int idx ) const
{
	if (idx >= 0 && idx < 100)
		return (this->ideas[idx]);
	return "[invalid index]";
}