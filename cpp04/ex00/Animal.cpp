/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:38:40 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/15 16:38:41 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("no_type")
{
	std::cout << "Animal (" << this->_type << ") created with default constructor" << std::endl;
}


Animal::~Animal(void)
{
	std::cout << "Animal (" << this->_type << ") destroyed" << std::endl;
}

Animal::Animal(std::string const &type): _type(type)
{
	std::cout << "Animal (" << this->_type << ") created with type constructor" << std::endl;
}

Animal::Animal(Animal const &copy)
{
	*this = copy;
	std::cout << "Animal (" << this->_type << ") copied" << std::endl;
}

Animal const	&Animal::operator=(Animal const &copy)
{
	std::cout << "Assignment operator for Animal (" << this->_type << ")" << std::endl;
	this->_type = copy.getType();
	return (*this);
}

std::string const	&Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal (" << this->_type << ") made a sound!" << std::endl;
}