/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:20:22 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/18 11:11:37 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : virtual public AMateria
{
	private:
		std::string _type;
		
	public:
		// OCF
		Cure();
		Cure(const Cure &other);
		Cure &operator=(const Cure &other);
		~Cure();

		// member fn
		Cure *clone() const;
		void use(ICharacter &target);
};


#endif