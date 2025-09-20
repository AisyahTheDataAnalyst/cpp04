/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:38:01 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/20 17:19:54 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp" // another way to include another class other than the inheritance way


// to make derived class also not abstract class
// , must implement every pure virtual fn in abstract base class
class Cat: virtual public AAnimal
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
		void makeSound() const; // if this is commented or not implemented, auto this class will be abstract class
		void setIdea( const std::string &newIdea );
		std::string getIdea() const;
};

#endif