/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:41:17 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/15 16:41:17 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _name("undefined")
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 1000; i++)
		this->_floor[i] = NULL;
}

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	for (int i = 0; i < 1000; i++)
		this->_floor[i] = NULL;
}

Character::Character(const Character &copy)
{
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
		if (copy._inventory[i] != NULL)
			this->_inventory[i] = copy._inventory[i]->clone();
	}
	for (int i = 0; i < 1000; i++)
	{
		this->_floor[i] = NULL;
		if (copy._floor[i] != NULL)
			this->_floor[i] = copy._floor[i]->clone();
	}
	this->_name = copy._name;
}

Character	&Character::operator=(const Character &copy)
{
	if (this != &copy)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i] != NULL)
				delete(this->_inventory[i]);
			this->_inventory[i] = NULL;
			this->_inventory[i] = copy._inventory[i]->clone();
		}
		for (int i = 0; i < 1000; i++)
		{
			if (this->_floor[i] != NULL)
				delete(this->_floor[i]);
			this->_floor[i] = NULL;
			this->_floor[i] = copy._floor[i]->clone();
		}
		this->_name = copy._name;
	}
	return (*this);
}

std::string const	&Character::getName(void)
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	int	i = 0;

	if (idx < 4 && idx >= 0 && this->_inventory[idx] != NULL)
	{
		while (this->_floor[i] != NULL)
			i++;
		this->_floor[i] = this->_inventory[idx];
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete (this->_inventory[i]);
	}
	for (int i = 0; i < 1000; i++)
	{
		if (this->_floor[i])
			delete (this->_floor[i]);
	}
}