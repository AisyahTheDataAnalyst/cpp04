/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:21:24 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/19 16:27:14 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *_inventory[4];

	public:
		// OCF
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		MateriaSource &operator=(const MateriaSource &other);
		~MateriaSource();

		// member function:
		void learnMateria(AMateria *m); // copies the Materia passed as param, stores in memory so it can be cloned later
		AMateria *createMateria(std::string const &type); 
		// returns a new Materia. 
		// The latter is a copy of the Materia previously learned by
		// the MateriaSource whose type equals the one passed as parameter. 
		// Returns 0 if the type is unknown.
};


#endif