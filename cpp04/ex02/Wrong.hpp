/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Wrong.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:41:02 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/15 16:41:03 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_HPP

# define WRONG_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal(void);
		WrongAnimal(std::string const &type);
		WrongAnimal(WrongAnimal const &copy);
		~WrongAnimal(void);

		WrongAnimal const	&operator=(WrongAnimal const &copy);

		std::string const	&getType(void) const;

		void	makeSound(void) const;
};

class WrongCat: public WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongCat(void);
		WrongCat(std::string const &type);
		WrongCat(WrongCat const &copy);
		~WrongCat(void);

		WrongCat const	&operator=(WrongCat const &copy);

		std::string const	&getType(void) const;

		void	makeSound(void) const;
};
		

#endif