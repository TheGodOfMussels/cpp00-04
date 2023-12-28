/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:38:44 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/15 16:38:45 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_HPP

# define ANIMAL_HPP

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

		virtual void	makeSound(void) const;
};

#endif