/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:40:40 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/15 16:40:41 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CAT_HPP

# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
		const Brain	*_brain;
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