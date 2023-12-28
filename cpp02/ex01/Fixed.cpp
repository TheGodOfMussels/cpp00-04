/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:43:57 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/10 15:56:08 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static float	ft_power(float base, int ex)
{
	float	res;

	if (!ex)
		return (1);
	if (ex < 0)
	{
		base = 1 / base;
		ex *= -1;
	}
	res = base;
	while (--ex)
		res *= base;
	return (res);
}

const int	Fixed::_fract = 8;

Fixed::Fixed(void): _val(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int value): _val(value * ft_power(2, this->_fract))
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value): _val(value * ft_power(2, this->_fract))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_val = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called." << std::endl;
	return (this->_val);
}

void	Fixed::setRawBits (const int raw)
{
	this->_val = raw;
}

float	Fixed::toFloat(void) const
{
	return (this->_val * ft_power(2, -this->_fract));
}

int	Fixed::toInt(void) const
{
	return (this->_val * ft_power(2, -this->_fract));
}

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nb)
{
	return (str << fixed_nb.toFloat());
}