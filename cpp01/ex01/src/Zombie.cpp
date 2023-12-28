/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:44:52 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/08 16:44:53 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::Zombie(void)
{
	this->name = "(null)";
}

Zombie::~Zombie()
{
	std::cout << this->name << " is being killed!" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}