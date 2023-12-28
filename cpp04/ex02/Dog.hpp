/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:40:47 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/15 16:40:48 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	DOG_HPP

# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		const Brain	*_brain;
	public:
		Dog(void);
		~Dog(void);
		Dog(std::string const &type);
		Dog(Dog const &copy);

		Dog const	&operator=(Dog const &copy);

		std::string const	&getType(void) const;

		void	makeSound(void) const;
};

#endif