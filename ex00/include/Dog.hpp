/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:38:52 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/24 10:42:34 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
	public:
		//OCF
		Dog();
		Dog( const Dog &other );
		Dog &operator=( const Dog &other );
		~Dog();
		
		// function member
		std::string getType() const;
		void makeSound() const;
};

#endif