/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:45:54 by ilevy             #+#    #+#             */
/*   Updated: 2025/03/21 11:48:19 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>

Cat::Cat( void )
{
	Brain *brainy = new Brain;
	this->brain = brainy;
	this->type = "Cat";
	std::cout << BLUE << "Default constructor called for Cat! The type is currently " << this->type << RESET <<std::endl;
}

Cat::Cat( const std::string& type_var )
{
	std::string idea;
	idea = "I am a ";
	idea.append(type_var);
	Brain *brainy = new Brain(idea);
	this->brain = brainy;
	this->type = type_var;
	std::cout << BLUE << "Parameterized constructor called for Cat! The type is currently " << this->type << RESET <<std::endl;
}

Cat::Cat( const Cat& copy ): Animal(copy)
{
	this->brain = new Brain(*copy.brain);
	this->type = copy.type;
	std::cout << BLUE << "Copy constructor called for Cat! The type is currently " << this->type << RESET <<std::endl;
}

Cat& Cat::operator=( const Cat& copy )
{
	if (this != &copy)
	{
		delete this->brain;
		this->brain = new Brain(*copy.brain);
		this->type = copy.type;
	}
	std::cout << BLUE << "Copy assignment operator called for Cat! The type is currently " << this->type << RESET <<std::endl;
	return (*this);
}

Cat::~Cat( void )
{
	delete this->brain;
	std::cout << BLUE << "Destructor called for Cat of type: " << this->type << RESET << std::endl;
}

void	Cat::makeSound( void ) const
{
	std::cout << RED << "*Meowing noises from type: " << this->type << "*" << RESET << std::endl;
}

std::string	Cat::getType( void ) const
{
	return (this->type);
}

void	Cat::compareCat( const Cat& comp )
{
	std::cout << "\nWe'll compare two cats here and test their copy depth" << std::endl;
	std::cout << "Here is the memory address of my cat's brain: " << (void *)this->brain << std::endl;
	std::cout << "Here is the memory address of the compared cat's brain: " << (void *)comp.brain << std::endl;
}