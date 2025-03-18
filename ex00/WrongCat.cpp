#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void )
{
	this->type = "WrongCat";
	std::cout << BLUE << "Default constructor called for WrongCat! The type is currently " << this->type << RESET <<std::endl;
}

WrongCat::WrongCat( const std::string& type_var )
{
	this->type = type_var;
	std::cout << BLUE << "Parameterized constructor called for WrongCat! The type is currently " << this->type << RESET <<std::endl;
}

WrongCat::WrongCat( const WrongCat& copy ): WrongAnimal(copy)
{
	this->type = copy.type;
	std::cout << BLUE << "Copy constructor called for WrongCat! The type is currently " << this->type << RESET <<std::endl;
}

WrongCat& WrongCat::operator=( const WrongCat& copy )
{
	if (this != &copy)
		this->type = copy.type;
	std::cout << BLUE << "Copy assignment operator called for WrongCat! The type is currently " << this->type << RESET <<std::endl;
	return (*this);
}

WrongCat::~WrongCat( void )
{
	std::cout << BLUE << "Destructor called for WrongCat of type: " << this->type << RESET << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << RED << "*Meowing noises from type: " << this->type << "*" << RESET << std::endl;
}

std::string	WrongCat::getType( void ) const
{
	return (this->type);
}