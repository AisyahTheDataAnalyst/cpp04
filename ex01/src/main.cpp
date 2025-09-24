/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:40:22 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/24 13:15:22 by aimokhta         ###   ########.fr       */
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
	for (int i = 0; i < 3; i++)
		std::cout << "Original idea: " << dog.getIdea(i) << std::endl;
	dog.setIdea(0, "I want to eat kibbles");
	dog.setIdea(1, "I want to eat dogtreats");
	dog.setIdea(2, "I want to eat fruits");
	for (int i = 0; i < 3; i++)
		std::cout << "New idea: " << dog.getIdea(i) << std::endl;

	// -------------cat
	std::cout << "\nCat" << std::endl;

	Cat cat;

	std::cout << "Type of animal: " << cat.getType() << std::endl;
	for (int i = 0; i < 3; i++)
		std::cout << "Original idea: " << cat.getIdea(i) << std::endl;
	cat.setIdea(0, "I want to eat fish");
	cat.setIdea(1, "I want to eat tuna");
	cat.setIdea(2, "I want to eat salmon");
	for (int i = 0; i < 3; i++)
		std::cout << "New idea: " << cat.getIdea(i) << std::endl;
	

	// deep copies demonstration
	std::cout << "\n_________________________________________" << std::endl;
	std::cout << "\n[Deep copies demonstration]" << std::endl;
	std::cout << "dogCopy:" << std::endl;

	Dog dogCopy;
	std::cout << "\nCopy assignment operator on dogCopy:" << std::endl;
	dogCopy = dog;
	for (int i = 0; i < 3; i++)
		std::cout << "Original idea: " << dogCopy.getIdea(i) << std::endl;
	dogCopy.setIdea(0, "I want a dog house");
	dogCopy.setIdea(1, "I want a bone");
	dogCopy.setIdea(2, "I want a dogtoy");
	for (int i = 0; i < 3; i++)
		std::cout << "New idea: " << dogCopy.getIdea(i) << std::endl;
	std::cout << "\nCopy constructor on dog:" << std::endl;
	Dog dog1(dog);


	std::cout << "\n\ncatCopy:" << std::endl;

	Cat catCopy;
	std::cout << "\nCopy assignment operator on catCopy:" << std::endl;
	catCopy = cat;
	for (int i = 0; i < 3; i++)
		std::cout << "Original idea: " << catCopy.getIdea(i) << std::endl;
	catCopy.setIdea(0, "I want a box");
	catCopy.setIdea(1, "I want a cat tunnel");
	catCopy.setIdea(2, "I want a mouse toy");
	for (int i = 0; i < 3; i++)
		std::cout << "New idea: " << catCopy.getIdea(i) << std::endl;
	// std::cout << "New idea: " << catCopy.getIdea(100) << std::endl; // will print out "[invalid index]"
	std::cout << "\nCopy constructor on cat:" << std::endl;
	Cat cat1(cat);
	std::cout << std::endl;
	
	return 0;
}