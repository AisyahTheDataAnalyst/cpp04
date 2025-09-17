/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:37:23 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/17 14:55:59 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# define RESET "\033[0m"
# define BLUE "\033[1;34m"
# define CYAN "\033[1;36m"
# define RED "\033[1;31m"
# define ORANGE "\033[38;5;208m"
# define RED_NORMAL "\033[1;31m"
# define RED_DIM "\033[2;31m"

class Animal
{
	protected:
		std::string type;
		// Animal(); // method 1. constructor must be protected/private

	public:
		//OCF
		Animal();
		Animal( const Animal &other );
		Animal &operator=( const Animal &other );
		virtual ~Animal();
		
		// function member
		virtual std::string getType() const;
		virtual void makeSound() const = 0; // method 2: at least 1 pure virtual → class is abstract
};

#endif