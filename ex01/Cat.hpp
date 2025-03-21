/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:38:24 by ilevy             #+#    #+#             */
/*   Updated: 2025/03/21 11:43:51 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_HPP
# define CAT_HPP

# include "Brain.hpp"
# include "Animal.hpp"
# include <iostream>

class Cat:public Animal
{
	private:
		Brain *brain;
	public:
		Cat( void );
		Cat( const std::string& type );
		Cat( const Cat& copy );
		Cat& operator=( const Cat& copy );
		~Cat( void );
		
		void makeSound( void ) const;
		std::string getType( void ) const;
		void	compareCat( const Cat& comp );
};

#endif