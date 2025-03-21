/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:36:10 by ilevy             #+#    #+#             */
/*   Updated: 2025/03/21 15:02:20 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# define RED "\033[31m"
# define YELLOW "\033[33m"
# define GREEN "\033[32m"
# define BLUE "\033[34m"
# define BOLD "\033[1m"
# define RESET "\033[0m"

# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal( void );
		Animal( const std::string& type );
		Animal( const Animal& copy );
		Animal& operator=( const Animal& copy );
		virtual ~Animal( void ) = 0;

		virtual void makeSound( void ) const = 0;
		virtual std::string getType( void ) const;
};

#endif
