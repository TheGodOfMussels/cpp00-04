/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:41:30 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/10 15:41:31 by dimolin2         ###   ########.fr       */
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

	int	getRawBits(void) const;
	void	setRawBits(int const raw);

	Fixed	&operator=(Fixed const &copy);
};

#endif