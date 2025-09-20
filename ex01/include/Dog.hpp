/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:38:52 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/20 11:23:54 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: virtual public Animal
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
		void setIdea( const std::string &newIdea );
		std::string getIdea() const;
};

#endif