/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:36:05 by ilevy             #+#    #+#             */
/*   Updated: 2025/03/11 12:07:44 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal( void )
{
	this->type = "Undefined";
	std::cout << BLUE << "Default constructor called for Animal! The type is currently " << this->type << RESET <<std::endl;
}

Animal::Animal( const std::string& type_var )
{
	this->type = type_var;
	std::cout << BLUE << "Parameterized constructor called for Animal! The type is currently " << this->type << RESET <<std::endl;
}

Animal::Animal( const Animal& copy )
{
	if (this != &copy)
		*this = copy;
	std::cout << BLUE << "Copy constructor called for Animal! The type is currently " << this->type << RESET <<std::endl;
}

Animal& Animal::operator=( const Animal& copy )
{
	this->type = copy.type;
	std::cout << BLUE << "Copy assignment operator called for Animal! The type is currently " << this->type << RESET <<std::endl;
	return (*this);
}

Animal::~Animal( void )
{
	std::cout << BLUE << "Destructor called for Animal of type: " << this->type << RESET << std::endl;
}

void	Animal::makeSound( void ) const
{
	std::cout << RED << "*Undefined Animal noises from type: " << this->type << "*" << RESET << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}