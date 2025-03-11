/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:38:26 by ilevy             #+#    #+#             */
/*   Updated: 2025/03/11 12:06:12 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>

class Dog:public Animal
{
	public:
		Dog( void );
		Dog( const std::string& type );
		Dog( const Dog& copy );
		Dog& operator=( const Dog& copy );
		~Dog( void );
		
		void makeSound( void ) const;
		std::string getType(void) const;
};

#endif