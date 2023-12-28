/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:38:56 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/15 16:38:57 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog created with default constructor" << std::endl;
}

Dog::Dog(std::string const &type): Animal(type)
{
	std::cout << "Dog created" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed" << std::endl;
}

Dog::Dog(Dog const &copy): Animal(copy)
{
	*this = copy;
	std::cout << "Dog copied" << std::endl;
}

Dog const	&Dog::operator=(Dog const &copy)
{
	std::cout << "Assignment operator for Dog" << std::endl;
	Animal::operator=(copy);
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