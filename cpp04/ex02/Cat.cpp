/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:39:42 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/22 15:58:44 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	this->_brain = new Brain();
	std::cout << "Cat created with default constructor" << std::endl;
}

Cat::Cat(std::string const &type): Animal(type)
{
	this->_brain = new Brain();
	std::cout << "Cat created" << std::endl;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Cat destroyed" << std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	_brain = new Brain(*copy._brain);
	std::cout << "Cat copied" << std::endl;
}

Cat const	&Cat::operator=(Cat const &copy)
{
	std::cout << "Assignment operator for Cat" << std::endl;
	Animal::operator=(copy);
	this->_brain = copy._brain;
	return (*this);
}

std::string const	&Cat::getType(void) const 
{
	return (this->_type);
}

void	Cat::makeSound(void) const
{
	std::cout << "meow!" << std::endl;
}