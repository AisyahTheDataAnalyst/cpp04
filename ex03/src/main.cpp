/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 15:18:33 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/24 13:11:34 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me"); // the character that stores the slots

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice"); // can try "ice" since it dosent need to be unique
	me->equip(tmp);
	tmp = src->createMateria("ice"); // 
	me->equip(tmp);
	tmp = src->createMateria("cure"); // slots are full already
	me->equip(tmp);



	ICharacter* bob = new Character("bob"); // the character used just to use the name

	std::cout << "Before unequip(bob):" << std::endl;
	std::cout << "Idx = 0" << std::endl;
	me->use(0, *bob);
	std::cout << "Idx = 1" << std::endl;
	me->use(1, *bob);
	std::cout << "Idx = 2" << std::endl;
	me->use(2, *bob);
	std::cout << "Idx = 3" << std::endl;
	me->use(3, *bob);
	std::cout << "Idx = 4" << std::endl;
	me->use(4, *bob);

	me->unequip(0);

	std::cout << "\nAfter unequip(bob):" << std::endl;
	std::cout << "Idx = 0" << std::endl;
	me->use(0, *bob); // nothing should happen, not even leaks
	std::cout << "Idx = 1" << std::endl;
	me->use(1, *bob);
	std::cout << "Idx = 2" << std::endl;
	me->use(2, *bob);
	std::cout << "Idx = 3" << std::endl;
	me->use(3, *bob);
	std::cout << "Idx = 4" << std::endl;
	me->use(4, *bob);

	Character david("david");
	// ICharacter* davidCopy = new Character(david); // to check it does DEEP COPY - no crash or leaks

	std::cout << "\nAfter unequip(david):" << std::endl;
	std::cout << "Idx = 0" << std::endl;
	me->use(0, david); // nothing should happen, not even leaks
	std::cout << "Idx = 1" << std::endl;
	me->use(1, david);
	std::cout << "Idx = 2" << std::endl;
	me->use(2, david);
	std::cout << "Idx = 3" << std::endl;
	me->use(3, david);
	std::cout << "Idx = 4" << std::endl;
	me->use(4, david);


	// delete davidCopy;
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

	Aisyah.equip(src->create("cure"))
	Aisyah.equip(src->create("ice"))

*/