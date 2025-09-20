/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:37:23 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/20 14:21:27 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>
# define RESET "\033[0m"
# define BLUE "\033[1;34m"
# define CYAN "\033[1;36m"
# define RED "\033[1;31m"
# define ORANGE "\033[38;5;208m"
# define RED_NORMAL "\033[1;31m"
# define RED_DIM "\033[2;31m"

// abstract calss
class AAnimal
{
	protected:
		std::string type;
		// Animal(); // method 1. constructor must be protected/private

	public:
		//OCF
		AAnimal();
		AAnimal( const AAnimal &other );
		AAnimal &operator=( const AAnimal &other );
		virtual ~AAnimal();
		
		// function member
		virtual std::string getType() const;
		virtual void makeSound() const = 0; 
		// method 2: at least 1 pure virtual → class is abstract
		// "= 0;" - special C++ syntax that tells the compiler this is a pure virtual fn
		// it enforces every derived class must implement that function
		// , or else derived class is also abstract 
		// can but no need to code makeSound() in.cpp
		// , they are meant to be overriden in derived class
};

#endif