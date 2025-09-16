/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:38:01 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/16 10:35:32 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: virtual public Animal
{
	private:
		std::string type;

	public:
		//OCF
		Cat();
		Cat( const Cat &other );
		Cat &operator=( const Cat &other );
		~Cat();
		
		// function member
		std::string getType() const;
		void makeSound() const;
};

#endif