/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:39:11 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/20 14:11:01 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

int Brain::ideaCount = 0;

// OCF

Brain::Brain() 
// : ideas[ideaCount]("Random thoughts"), currIdeaCount(ideaCount)
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
	this->ideas[ideaCount] = "Random thoughts";
	this->currIdeaCount = ideaCount;
	++ideaCount;
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
		this->currIdeaCount = other.currIdeaCount;
		// this->ideaCount = other.ideaCount;
		Brain::ideaCount = other.ideaCount;
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
}

// setter & getter

void Brain::setIdea( const std::string &newIdea )
{
	this->ideas[this->currIdeaCount] = newIdea;
}

std::string Brain::getIdea() const
{
	return (this->ideas[this->currIdeaCount]);
}