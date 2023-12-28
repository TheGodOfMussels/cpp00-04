/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:39:10 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/15 16:39:11 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Wrong.hpp"

int	main(void)
{
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	const WrongAnimal	*k = new WrongCat();

	j->makeSound();
	i->makeSound();
	k->makeSound();
	meta->makeSound();

	delete	meta;
	delete	i;
	delete	j;
	delete	k;

	return 0;
}