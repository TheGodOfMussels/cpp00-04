/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:35:53 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/10 19:17:23 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap(100, 50, 20, "Default")
{
	std::cout << "ScavTrap " << this->_name << " built from default." << std::endl;
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap(100, 50, 20, name)
{
	std::cout << "ScavTrap " << this->_name << " has been built." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " exploded." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy): ClapTrap(copy._hp, copy._ep, copy._atk, copy._name)
{
	std::cout << "ScavTrap " << this->_name << " copied." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &copy)
{
	std::cout << "Assignment operator for ScavTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	if (this->_hp <= 0)
		std::cout << "Cannot enter gate-keeper mode cause ScavTrap " << this->_name << " is dead!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " switched to \"Guard gate\" mode!" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (this->_ep && this->_hp > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacked " << target << " making " << this->_atk << " point(s) of damage!" << std::endl;
		this->_ep--;
	}
	if (this->_hp <= 0)
		std::cout << "ScavTrap " << this->_name << " is dead!" << std::endl;
	else if (this->_ep == 0)
		std::cout << "ScavTrap " << this->_name << " is out of energy!" << std::endl;
}