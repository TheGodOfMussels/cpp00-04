/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:39:49 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/22 15:58:46 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	this->_brain = new Brain();
	std::cout << "Dog created with default constructor" << std::endl;
}

Dog::Dog(std::string const &type): Animal(type)
{
	this->_brain = new Brain();
	std::cout << "Dog created" << std::endl;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Dog destroyed" << std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	_brain = new Brain(*copy._brain);
	std::cout << "Dog copied" << std::endl;
}

Dog const	&Dog::operator=(Dog const &copy)
{
	std::cout << "Assignment operator for Dog" << std::endl;
	Animal::operator=(copy);
	this->_brain = copy._brain;
	return (*this);
}

std::string const	&Dog::getType(void) const
{
	return (this->_type);
}

void	Dog::makeSound(void) const
{
	std::cout << "woof woof!" << std::endl;
}