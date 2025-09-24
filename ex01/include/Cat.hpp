/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:38:01 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/24 08:59:23 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp" // another way to include another class other than the inheritance way

class Cat: public Animal
{
	private:
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
		void setIdea( int idx, const std::string &newIdea );
		std::string getIdea(int idx) const;
};

#endif