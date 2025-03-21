/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:59:44 by ilevy             #+#    #+#             */
/*   Updated: 2025/03/21 11:41:49 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    protected:
        std::string *ideas;
    public:
        Brain( void );
        Brain( const std::string& name );
        Brain( const Brain& copy );
        Brain& operator=(const Brain& copy );
        ~Brain( void );
        void    showIdeas( void );
};

#endif