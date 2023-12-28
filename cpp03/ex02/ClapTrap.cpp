/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:35:31 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/10 16:35:32 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("default"), _hp(10), _ep(10), _atk(0)
{
	std::cout << "ClapTrap " << this->_name << " built with default settings." << std::endl;
}

ClapTrap::ClapTrap(std::string const &name): _name(name), _hp(10), _ep(10), _atk(0)
{
	std::cout << "ClapTrap " << this->_name << " has been built." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " exploded." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
	std::cout << "ClapTrap " << this->_name << " copied." << std::endl;
	*this = copy;
}

ClapTrap::ClapTrap(unsigned int hp, unsigned int ep, unsigned int atk, std::string name): _name(name), _hp(hp), _ep(ep), _atk(atk)
{
	std::cout << "ClapTrap base contructor called for " << this->_name << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->_ep && this->_hp > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacked " << target << " making " << this->_atk << " point(s) of damage!" << std::endl;
		this->_ep--;
	}
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	else if (this->_ep == 0)
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > 0)
	{
		std::cout << "ClapTrap " << this->_name << " took " << amount << " point(s) of damage!" << std::endl;
		this->_hp -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead! Please stop!" << std::endl;
	if (this->_hp < 0)
		this->_hp = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hp > 0 && this->_ep > 0)
	{
		std::cout << "ClapTrap " << this->_name << " repaired itself " << amount << " point(s)." << std::endl;
		this->_ep--;
		this->_hp += amount;
	}
	if (this->_hp <= 0)
		std::cout << "ClapTrap " << this->_name << " cannot be repaired cause is dead!" << std::endl;
	else if (this->_ep <= 0)
		std::cout << "ClapTrap " << this->_name << " cannot repair itself cause it has no energy!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Assignment operator for ClapTrap called." << std::endl;
	this->_name = copy.get_name();
	this->_hp = copy.get_hp();
	this->_ep = copy.get_ep();
	this->_atk = copy.get_atk();
	return (*this);
}

std::string const	&ClapTrap::get_name(void) const
{
	return (this->_name);
}

int const	&ClapTrap::get_hp(void) const
{
	return (this->_hp);
}

int const	&ClapTrap::get_ep(void) const
{
	return (this->_ep);
}

int const	&ClapTrap::get_atk(void) const
{
	return (this->_atk);
}