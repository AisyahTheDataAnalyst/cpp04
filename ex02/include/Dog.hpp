/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:38:52 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/20 14:27:58 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

// to make derived class also not abstract class
// , must implement every pure virtual fn in abstract base class
class Dog: virtual public AAnimal
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
		void makeSound() const; // if this is commented or not implemented, auto this class will be abstract class
		void setIdea( const std::string &newIdea );
		std::string getIdea() const;
};

#endif