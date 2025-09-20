/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 16:19:55 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/20 15:04:44 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "MateriaSource.hpp"
# define MAX_INVENTORY 4

class Character : public ICharacter
{
	private:
		AMateria *_inventory[MAX_INVENTORY];
		AMateria **_unequipStorage;
		int _unequipCounter;
		std::string _name;
		Character();

	public:
		// OCF
		Character(const std::string &name);
		Character(const Character &other); // must be DEEP , must delete the Materias of Character before new one are added to their inventory
		Character &operator=(const Character &other); // must be DEEP, must delete the Materias of Character before new one are added to their inventory
		~Character(); // Materias must be deleted when Character is destroyed

		// member functions:
		std::string const &getName() const;
		void equip(AMateria *m); // equip in the 1st empty slot
		void unequip(int idx); // should not delete Materia
		void use(int idx, ICharacter &target);
};


#endif