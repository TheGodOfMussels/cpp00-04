/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:39:18 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/15 16:39:19 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Wrong.hpp"

WrongAnimal::WrongAnimal(void): _type("no_type")
{
	std::cout << "WrongAnimal created with default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const &type): _type(type)
{
	std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
	*this = copy;
	std::cout << "WrongAnimal copied" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal const	&WrongAnimal::operator=(WrongAnimal const &copy)
{
	std::cout << "Assignment operator for WrongAnimal" << std::endl;
	this->_type = copy.getType();
	return (*this);
}

std::string const	&WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal made a sound!" << std::endl;
}



WrongCat::WrongCat(void): _type("WrongCat")
{
	std::cout << "WrongCat created with default constructor" << std::endl;
}

WrongCat::WrongCat(std::string const &type): WrongAnimal(type), _type("WrongCat")
{
	std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy): WrongAnimal(copy)
{
	*this = copy;
	std::cout << "WrongCat copied" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat const	&WrongCat::operator=(WrongCat const &copy)
{
	std::cout << "Assignment operator for WrongCat" << std::endl;
	WrongAnimal::operator=(copy);
	return (*this);
}

std::string const	&WrongCat::getType(void) const
{
	return (this->_type);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat goes mad!" << std::endl;
}