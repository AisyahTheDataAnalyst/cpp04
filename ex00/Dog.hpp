/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:38:52 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/16 10:35:40 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: virtual public Animal
{
	private:
		std::string type;

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