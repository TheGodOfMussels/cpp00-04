/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:38:53 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/15 16:38:54 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP

# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		~Cat(void);
		Cat(std::string const &type);
		Cat(Cat const &copy);

		Cat const	&operator=(Cat const &copy);

		std::string const	&getType(void) const;

		void	makeSound(void) const;
};

#endif