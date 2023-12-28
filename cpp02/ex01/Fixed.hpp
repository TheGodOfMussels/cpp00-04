/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:44:02 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/10 15:44:03 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int	_val;
	static const int	_fract;
public:
	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const &copy);
	Fixed(const int value);
	Fixed(const float value);

	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int	toInt(void) const;

	Fixed	&operator=(Fixed const &copy);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nb);

#endif