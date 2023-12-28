/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:35:38 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/10 19:26:47 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap(100, 100, 30, "Default")
{
	std::cout << "FragTrap " << this->_name << " built from default." << std::endl;
}

FragTrap::FragTrap(std::string const &name): ClapTrap(100, 100, 30, name)
{
	std::cout << "FragTrap " << this->_name << " has been built." << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " exploded." << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy): ClapTrap(copy._hp, copy._ep, copy._atk, copy._name)
{
	std::cout << "FragTrap " << this->_name << " copied." << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &copy)
{
	std::cout << "Assignment operator for FragTrap called." << std::endl;
	ClapTrap::operator=(copy);
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	if (this->_hp <= 0)
		std::cout << "FragTrap " << this->_name << " cannot high five cause is dead!" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " says: \"HIGH FIVE GUYS!\"." << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	if (this->_ep && this->_hp > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacked " << target << " making " << this->_atk << " point(s) of damage!" << std::endl;
		this->_ep--;
	}
	if (this->_hp <= 0)
		std::cout << "FragTrap " << this->_name << " is dead!" << std::endl;
	else if (this->_ep == 0)
		std::cout << "FragTrap " << this->_name << " is out of energy!" << std::endl;
}