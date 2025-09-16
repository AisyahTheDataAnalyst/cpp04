/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:37:23 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/16 10:55:45 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		//OCF
		WrongAnimal();
		WrongAnimal( const WrongAnimal &other );
		WrongAnimal &operator=( const WrongAnimal &other );
		virtual ~WrongAnimal();
		
		// function member
		virtual std::string getType() const;
		virtual void makeSound() const;
};

#endif