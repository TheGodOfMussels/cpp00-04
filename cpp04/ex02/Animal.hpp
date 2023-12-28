/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:40:23 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/15 16:40:24 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	Animal_HPP

# define Animal_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		Animal(std::string const &type);
		Animal(Animal const &copy);
		virtual	~Animal(void);

		Animal const	&operator=(Animal const &copy);

		std::string const	&getType(void) const;

		virtual void	makeSound(void) const = 0;
};

#endif