/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilevy <ilevy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 11:59:47 by ilevy             #+#    #+#             */
/*   Updated: 2025/03/21 11:48:31 by ilevy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain( void )
{
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "Default idea";
    std::cout << "Created a brain full of Default ideas" << std::endl;
}

Brain::Brain( const std::string& idea )
{
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = idea;
    std::cout << "Created a brain full of this parameterized idea:" << idea << std::endl;
}

Brain::Brain( const Brain& copy )
{
    this->ideas = new std::string[100];
    for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
    std::cout << "Copied a brain full of ideas using the copy cloning machine" << std::endl;
}

Brain&  Brain::operator=( const Brain& copy )
{
    if (!this->ideas)
        this->ideas = new std::string[100];
    if (this != &copy)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = copy.ideas[i];
        } 
    }
    std::cout << "Equalized two brains full of ideas assigning them to one another" << std::endl;
    return (*this);
}

Brain::~Brain( void )
{
    delete[] this->ideas;
    std::cout << "Destroyed the brain, and all its precious ideas" << std::endl;
}

void    Brain::showIdeas( void )
{
    for (int i = 0; i < 100; i++)
    {
        std::cout << "This is ideas #" << i << ": " << this->ideas[i] << std::endl;
    }
}