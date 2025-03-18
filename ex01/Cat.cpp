/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:45:54 by ilevy             #+#    #+#             */
/*   Updated: 2025/03/18 12:25:37 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>

Cat::Cat( void )
{
	this->brain = new Brain();
	this->type = "Cat";
	std::cout << BLUE << "Default constructor called for Cat! The type is currently " << this->type << RESET <<std::endl;
}

Cat::Cat( const std::string& type_var )
{
	std::string idea;
	idea = "I am a ";
	idea.append(type_var);
	this->brain = new Brain(idea);
	this->type = type_var;
	std::cout << BLUE << "Parameterized constructor called for Cat! The type is currently " << this->type << RESET <<std::endl;
}

Cat::Cat( const Cat& copy ): Animal(copy)
{
	this->brain = new Brain();
	this->type = copy.type;
	std::cout << BLUE << "Copy constructor called for Cat! The type is currently " << this->type << RESET <<std::endl;
}

Cat& Cat::operator=( const Cat& copy )
{
	this->brain = new Brain();
	if (this != &copy)
		this->type = copy.type;
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