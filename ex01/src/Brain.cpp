/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:39:11 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/16 19:29:20 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

int Brain::ideaCount = 0;

// OCF

Brain::Brain() //: ideas[ideaCount]("Random thoughts"), currIdeaCount(ideaCount)
{
	this->ideas[ideaCount] = "Random thoughts";
	this->currIdeaCount = ideaCount;
	++ideaCount;
	std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain( const Brain &other )
{
	*this = other;
	std::cout << "Brain: Copy constructor called" << std::endl;
}

Brain &Brain::operator=( const Brain &other )
{
	if (this != &other)
	{
		this->ideas[100] = other.ideas[100];
		this->ideaCount = other.ideaCount;
		this->currIdeaCount = other.currIdeaCount;
	}
	std::cout << "Brain: Assignment operator called" << std::endl;
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
}

// setter & getter

// void Brain::setIdea( const std::string &newIdea ) const
// {
// 	this->ideas[this->currIdeaCount] = newIdea;
// }

// std::string Brain::getIdea() const
// {
// 	return (this->ideas[this->currIdeaCount]); ///////////////
// }