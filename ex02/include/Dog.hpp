/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:38:52 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/24 09:23:28 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		Brain *dogBrain;

	public:
		//OCF
		Dog();
		Dog( const Dog &other );
		Dog &operator=( const Dog &other );
		~Dog();
		
		// function member
		std::string getType() const;
		void makeSound() const;
		void setIdea( int idx, const std::string &newIdea );
		std::string getIdea(int idx) const;
};

#endif