/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:18:33 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/19 19:27:25 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp" // +
#include "Character.hpp" // +
#include "Ice.hpp" //+
#include "Cure.hpp" //+

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	std::cout << "Before unequip:" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);

	me->unequip(0);

	std::cout << "\nAfter unequip:" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	
	delete bob;
	delete me;
	delete src;
	
	return 0;
}

/*
	Ice
	Fire
	Cure
	Wind
	Earth

	-------
	MateriaFactory
	Fire
																																									
	---------

	Aisyah.equip(src->create("fire"))
	Aisyah.equip(src->create("ice"))



*/