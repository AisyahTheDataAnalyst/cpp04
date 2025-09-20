/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aimokhta <aimokhta@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 09:40:22 by aimokhta          #+#    #+#             */
/*   Updated: 2025/09/20 14:52:24 by aimokhta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"

	// to make Animal class not instantiable 
	// - 2 ways in C++98, adjustments in .hpp only

	// 1. Make constructor in private/protected

	// 2. Make Animal class as an abstract class 
	// __________________________________________
	// abstract class = a class that you cannot instantiate directly
	// a class become abstract when it at least has 1 pure vitual function
	// [ virtual function vs pure virtual function ]
	// -> virtual function = a fn declared with virtual allowing runtime polymorphism
	// -> pure virtual function = a virtual fn that has no implementation in the base class
	// virtual fn(); → virtual function (optional override, base class can still be used).
	// virtual fn() = 0; → pure virtual function → abstract class (blueprint only).
	// C++98 -> enough by just making Animal public functions as pure virtual TO OVERRIDE
	// C++98 -> keyword 'override' dosent exists
	// C++11 -> derived class must 'override' this fn, otherwise it too become abstract
	// ex: class dog -> void makeSound() const override;
	// put OVERRIDE keywod at the end at the same function of derived class


int main ()
{
	// AAnimal c; // has pure virtual function = becaome an abstract class now
	// c.getType();
	// c.makeSound();

	std::cout << "---Dog---" << std::endl;
	Dog a;
	std::cout << "Type of animal: " << a.getType() << std::endl;
	a.makeSound();

	std::cout << "\n---Cat---" << std::endl;
	Cat b;
	std::cout << "Type of animal: " << b.getType() << std::endl;
	b.makeSound();

	std::cout << "\n\n---Destructors---" << std::endl;

	return 0;
}