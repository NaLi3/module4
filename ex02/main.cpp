/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:36:13 by ilevy             #+#    #+#             */
/*   Updated: 2025/03/21 15:03:24 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	std::cout << "There are two types of copy types in C++. Shallow and Deep copies.\nShallow copies are two different pointers pointing at the same address in memory, and so when one of them modifies the value at the address, then the the other pointer will have its value changed too.\nThe deep copy creates two different addresses for the value, thus when one pointer changes the value, it doesnt change the other." << std::endl;
	std::cout << "In order to test if the copies are deep or shallow, we need to compare their memory addresses" << std::endl;
	std::cout << "\n\nThese are default tests to make sure there are no leaks" << std::endl;
	
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();
	
	delete dog;
	delete cat;

	Cat catty("salut");
	Cat simply = catty;
	catty.compareCat(simply);
	
	const Animal *(animal_array[100]);
	for (int i = 0; i < 50; i++)
		animal_array[i] = new Dog();
	std::cout << "\n\n\n\nCreated the doggies" << std::endl;
	for (int i = 50; i < 100; i++)
		animal_array[i] = new Cat();
	std::cout << "\n\n\n\nCreated the cats" << std::endl;
	for (int i = 0; i < 100; i++)
		delete animal_array[i];	
	return (0);
}