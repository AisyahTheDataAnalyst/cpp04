/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:37:23 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/16 10:49:44 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		//OCF
		Animal();
		Animal( const Animal &other );
		Animal &operator=( const Animal &other );
		virtual ~Animal();
		
		// function member
		virtual std::string getType() const;
		virtual void makeSound() const;
};

#endif