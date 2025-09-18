/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:07:19 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/18 11:38:34 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

//abstract class
class AMateria
{
	protected:
		std::string _type;

	public:
		//OCF
		AMateria(std::string const &type);
		AMateria(const AMateria &other);
		AMateria &operator=(const AMateria &other);
		~AMateria();

		//function member
		std::string const &getType() const; //Returns the materia type
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif