/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:38:26 by ilevy             #+#    #+#             */
/*   Updated: 2025/03/18 12:25:47 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_HPP
# define DOG_HPP

# include "Brain.hpp"
# include "Animal.hpp"
# include <iostream>

class Dog:public Animal
{
	private:
		Brain *brain;
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