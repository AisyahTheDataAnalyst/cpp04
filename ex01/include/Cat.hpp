/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:38:01 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/16 19:29:12 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp" // another way to include another class other than the inheritance way

class Cat: virtual public Animal
{
	private:
		std::string type;
		Brain *catBrain; // another way to include another class other than the inheritance way
	
	public:
		//OCF
		Cat();
		Cat( const Cat &other );
		Cat &operator=( const Cat &other );
		~Cat();
		
		// function member
		std::string getType() const;
		void makeSound() const;
		// void setIdea( const std::string &newIdea ) const;
		// std::string getIdea() const;
};

#endif