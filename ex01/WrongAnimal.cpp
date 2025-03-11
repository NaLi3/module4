/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 13:45:20 by ilevy             #+#    #+#             */
/*   Updated: 2025/03/11 13:45:32 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( void )
{
	this->type = "Undefined";
	std::cout << BLUE << "Default constructor called for WrongAnimal! The type is currently " << this->type << RESET <<std::endl;
}

WrongAnimal::WrongAnimal( const std::string& type_var )
{
	this->type = type_var;
	std::cout << BLUE << "Parameterized constructor called for WrongAnimal! The type is currently " << this->type << RESET <<std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& copy )
{
	if (this != &copy)
		*this = copy;
	std::cout << BLUE << "Copy constructor called for WrongAnimal! The type is currently " << this->type << RESET <<std::endl;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& copy )
{
	this->type = copy.type;
	std::cout << BLUE << "Copy assignment operator called for WrongAnimal! The type is currently " << this->type << RESET <<std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << BLUE << "Destructor called for WrongAnimal of type: " << this->type << RESET << std::endl;
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << RED << "*Undefined WrongAnimal noises from type: " << this->type << "*" << RESET << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}