/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:41:08 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/15 16:41:08 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void): _type("undefined")
{
}

AMateria::AMateria(std::string const &type): _type(type)
{
}

AMateria::AMateria(const AMateria &copy): _type(copy._type)
{
}

AMateria::~AMateria(void)
{
}

AMateria	&AMateria::operator=(const AMateria &copy)
{
	if (this != &copy)
	{
		this->_type = copy._type;
	}
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
}