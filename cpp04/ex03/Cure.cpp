/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:41:23 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/15 16:41:24 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	this->AMateria::_type = "cure";
}

Cure::Cure(const Cure &copy): AMateria(copy)
{
}

Cure::~Cure(void)
{
}

Cure	&Cure::operator=(const Cure &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}