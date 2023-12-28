/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:38:47 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/15 16:38:49 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat created with default constructor" << std::endl;
}

Cat::Cat(std::string const &type): Animal(type)
{
	std::cout << "Cat created" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat destroyed" << std::endl;
}

Cat::Cat(Cat const &copy): Animal(copy)
{
	*this = copy;
	std::cout << "Cat copied" << std::endl;
}

Cat const	&Cat::operator=(Cat const &copy)
{
	std::cout << "Assignment operator for Cat" << std::endl;
	Animal::operator=(copy);
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