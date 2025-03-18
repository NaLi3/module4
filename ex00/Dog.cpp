/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:58:18 by ilevy             #+#    #+#             */
/*   Updated: 2025/03/18 11:22:46 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>

Dog::Dog( void )
{
	this->type = "Dog";
	std::cout << BLUE << "Default constructor called for Dog! The type is currently " << this->type << RESET <<std::endl;
}

Dog::Dog( const std::string& type_var )
{
	this->type = type_var;
	std::cout << BLUE << "Parameterized constructor called for Dog! The type is currently " << this->type << RESET <<std::endl;
}

Dog::Dog( const Dog& copy ): Animal(copy)
{
	this->type = copy.type;
	std::cout << BLUE << "Copy constructor called for Dog! The type is currently " << this->type << RESET <<std::endl;
}

Dog& Dog::operator=( const Dog& copy )
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << BLUE << "Copy assignment operator called for Dog! The type is currently " << this->type << RESET <<std::endl;
	return (*this);
}

Dog::~Dog( void )
{
	std::cout << BLUE << "Destructor called for Dog of type: " << this->type << RESET << std::endl;
}

void	Dog::makeSound( void ) const
{
	std::cout << RED << "*Barking noises from type: " << this->type << "*" << RESET << std::endl;
}

std::string	Dog::getType( void ) const
{
	return (this->type);
}