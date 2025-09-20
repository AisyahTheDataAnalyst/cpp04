/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:40:22 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/20 14:50:57 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main ()
{
	// A single Animal object
	std::cout << "[A single Animal object]" << std::endl;
	std::cout << "---------Dog---------" << std::endl;
	const Animal *j = new Dog();
	std::cout << std::endl;
	delete j;
	std::cout << std::endl;

	std::cout << "-----------Cat----------" << std::endl;
	const Animal *i = new Cat();
	std::cout << std::endl;
	delete i;
	std::cout << std::endl;



	// An array of Animal objects
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << "\n[An array of Animal object]" << std::endl;
	std::cout << BLUE << "----------Constructors----------" << RESET << std::endl;
	const Animal *a[10];
	for(int i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			std::cout << CYAN << "Animal" << i << ":" << RESET << std::endl;
			a[i] = new Dog();
			std::cout << std::endl;
		}
		else
		{
			std::cout << CYAN << "Animal" << i << ":" << RESET << std::endl;
			a[i] = new Cat();
			std::cout << std::endl;
		}
	}

	std::cout << RED << "----------Destructors----------" << RESET << std::endl;
	for(int i = 0; i < 10; i++)
	{
		std::cout << ORANGE << "Animal" << i << ":" << RESET << std::endl;
		delete a[i];
		std::cout << std::endl;
	}



	// setters & getters
	// cannot do on Animal object to get ideas
	// cannot do setters on const objects which should be modified
	// ------------dog
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << "\n[Setters & Getters]" << std::endl;
	std::cout << "Dog" << std::endl;

	Dog dog;

	std::cout << "Type of animal: " << dog.getType() << std::endl;
	std::cout << "Original idea: " << dog.getIdea() << std::endl;
	dog.setIdea("I want a dog house");
	std::cout << "New idea: " << dog.getIdea() << std::endl;

	// -------------cat
	std::cout << "\nCat" << std::endl;

	Cat cat;

	std::cout << "Type of animal: " << cat.getType() << std::endl;
	std::cout << "Original idea: " << cat.getIdea() << std::endl;
	cat.setIdea("I want to eat fish");
	std::cout << "New idea: " << cat.getIdea() << "\n" << std::endl;
	

	// deep copies demonstration
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << "\n[Deep copies demonstration]" << std::endl;
	std::cout << "Dog_copy:" << std::endl;

	Dog dogCopy;
	std::cout << "\nCopy assignment operator on dog_copy:" << std::endl;
	dogCopy = dog;
	std::cout << "\nOriginal idea: " << dogCopy.getIdea() << std::endl;
	dogCopy.setIdea("I want delicious treats");
	std::cout << "New idea: " << dogCopy.getIdea() << std::endl;


	std::cout << "\n\nCat_copy:" << std::endl;

	Cat catCopy;
	std::cout << "\nCopy assignment operator on cat_copy:" << std::endl;
	catCopy = cat;
	std::cout << "\nOriginal idea: " << catCopy.getIdea() << std::endl;
	catCopy.setIdea("I want catnip");
	std::cout << "New idea: " << catCopy.getIdea() << "\n" << std::endl;
	return 0;
}