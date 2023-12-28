/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:44:46 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/10 15:44:47 by dimolin2         ###   ########.fr       */
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
	Fixed	operator+(Fixed const &copy) const;
	Fixed	operator-(Fixed const &copy) const;
	Fixed	operator*(Fixed const &copy) const;
	Fixed	operator/(Fixed const &copy) const;
	bool	operator==(Fixed const &copy) const;
	bool	operator!=(Fixed const &copy) const;
	bool	operator<=(Fixed const &copy) const;
	bool	operator>=(Fixed const &copy) const;
	bool	operator<(Fixed const &copy) const;
	bool	operator>(Fixed const &copy) const;

	Fixed	&operator++(void);
	Fixed	&operator--(void);
	Fixed	operator++(int val);
	Fixed	operator--(int val);

	static const Fixed	&min(Fixed const &copy_a, Fixed const &copy_b);
	static const Fixed	&max(Fixed const &copy_a, Fixed const &copy_b);
};

std::ostream	&operator<<(std::ostream &str, Fixed const &fixed_nb);

#endif