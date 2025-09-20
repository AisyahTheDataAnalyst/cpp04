/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:40:22 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/20 11:15:50 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Animal.hpp"

int main ()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();  // const objects can only call const functions (const put after the parameter)
	j->makeSound();
	meta->makeSound();
	std::cout << std::endl;

	delete i;
	delete j;
	delete meta;

	// -----------------------------------------------------
	// |                   "wrong classes"                 |
	// -----------------------------------------------------

	std::cout << std::endl;
	const WrongAnimal *k = new WrongAnimal();
	const WrongAnimal *l = new WrongCat();
	// const WrongAnimal *m = new Cat(); // not in the same inheritance, thus cannot compile
	const WrongAnimal *n(l);  // pointer copy, not copy obj - so no copy constructor message
	// WrongAnimal *o = l; // cannot copy const pointer into  non-const pointer - compiler blocks it

	std::cout << std::endl;
	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	std::cout << n->getType() << " " << std::endl;
	k->makeSound();  // const objects can only call const functions (const put after the parameter)
	l->makeSound();
	std::cout << std::endl;

	delete k;
	delete l;
	
	return 0;
}