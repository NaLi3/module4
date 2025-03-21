/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:36:13 by ilevy             #+#    #+#             */
/*   Updated: 2025/03/21 11:49:47 by ilevy            ###   ########.fr       */
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
	
	const Animal *i = new Dog();
	const Animal *j = new Cat();
	
	Cat catty;
	Cat simply = catty;
	catty.compareCat(simply);
	delete i;
	delete j;


	return (0);
}