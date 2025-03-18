/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:45:54 by ilevy             #+#    #+#             */
/*   Updated: 2025/03/18 11:23:34 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include <iostream>

Cat::Cat( void )
{
	this->type = "Cat";
	std::cout << BLUE << "Default constructor called for Cat! The type is currently " << this->type << RESET <<std::endl;
}

Cat::Cat( const std::string& type_var )
{
	this->type = type_var;
	std::cout << BLUE << "Parameterized constructor called for Cat! The type is currently " << this->type << RESET <<std::endl;
}

Cat::Cat( const Cat& copy ): Animal(copy)
{
	this->type = copy.type;
	std::cout << BLUE << "Copy constructor called for Cat! The type is currently " << this->type << RESET <<std::endl;
}

Cat& Cat::operator=( const Cat& copy )
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << BLUE << "Copy assignment operator called for Cat! The type is currently " << this->type << RESET <<std::endl;
	return (*this);
}

Cat::~Cat( void )
{
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