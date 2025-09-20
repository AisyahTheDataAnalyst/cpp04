/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:38:01 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/20 11:05:53 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		//OCF
		WrongCat();
		WrongCat( const WrongCat &other );
		WrongCat &operator=( const WrongCat &other );
		~WrongCat();
		
		// function member
		std::string getType() const;
		void makeSound() const;
};

#endif