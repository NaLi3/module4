/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:36:13 by ilevy             #+#    #+#             */
/*   Updated: 2025/03/18 11:47:32 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include <string>

int main( void )
{
	std::string option;
	std::cout << GREEN << "\n\nHello user! Im trying to demonstrate the concept of polymorphism" << std::endl;
	std::cout << GREEN << "Polymorphism allows to invoke a method upon an object without necessarily knowing its type upon call." << std::endl;
	std::cout << GREEN << "You will see here that you can have the same method call two different names." << RESET << std::endl;
	std::cout << BLUE << "\n\n Please type 1 to see proper animal usages, or 2 for Wrong animals. \n" << RESET << std::endl;
	std::getline(std::cin, option);
	if (!std::cin)
	{
		std::cout << "Found EOF, ending program! Have a nice day :)" << std::endl;
		return (1);
	}
	while (option != "1" && option != "2")
	{
		std::cout << "Please input a number, 1 for animal sounds and proper polymorphism. 2 for the wrong sound and no polymorphism." << std::endl;
		std::getline(std::cin, option);
		if (!std::cin)
		{
			std::cout << "Found EOF, ending program! Have a nice day :)" << std::endl;
			return (1);
		}
	}
	if (option == "1")
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the Cat sound!
		j->makeSound();
		meta->makeSound();
		return (0);
	}
	if (option == "2")
	{
		const WrongAnimal* meta = new WrongAnimal();
		const Animal* j = new Dog();
		const WrongAnimal* i = new WrongCat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the WrongAnimal sound!
		j->makeSound();
		meta->makeSound();
		return (0);
	}
	
}