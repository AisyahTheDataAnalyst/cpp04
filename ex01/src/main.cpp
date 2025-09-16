/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:40:22 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/16 19:52:53 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
// #include "WrongCat.hpp"

int main ()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	delete j;
	delete i;

	std::cout << BLUE << "\n----------Constructors----------" << RESET << std::endl;
	const Animal *a[10];
	for(int i = 0; i < 5; i++)
	{
		std::cout << CYAN << "Animal" << i << ":" << RESET << std::endl;
		a[i] = new Dog();
		std::cout << std::endl;
	}
	for(int i = 5; i < 10; i++)
	{
		std::cout << CYAN << "Animal" << i << ":" << RESET << std::endl;
		a[i] = new Cat();
		std::cout << std::endl;
	}

	std::cout << RED << "----------Destructors----------" << RESET << std::endl;
	for(int i = 0; i < 10; i++)
	{
		std::cout << ORANGE << "Animal" << i << ":" << RESET << std::endl;
		delete a[i];
		std::cout << std::endl;
	}

	// std::cout << "\nOriginal ideas:" << std::endl;
	// std::cout << "\nDog:" << std::endl;
	// j->getIdea();
	// std::cout << "\nCat:" << std::endl;
	// i->getIdea();
	// std::cout << std::endl;

	// std::cout << "\nModified ideas:" << std::endl;
	// std::cout << "\nDog:" << std::endl;
	// j->setIdea("I want a dog house");
	// j->getIdea();
	// std::cout << "\nCat:" << std::endl;
	// i->setIdea("I want to eat a fish");
	// i->getIdea();


	
	return 0;
}