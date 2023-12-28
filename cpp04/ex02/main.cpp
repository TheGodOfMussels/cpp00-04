/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:40:51 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/15 16:40:52 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Wrong.hpp"
#include "Brain.hpp"

int	main(void)
{
	int	value = 4;
	Animal	*zoo[2 * value];

	for (int i = 0; i < value; i++)
	{
		zoo[i] = new Dog();
		zoo[value + i] = new Cat();
	}

	std::cout << std::endl;

	for (int k = 0; k < value * 2; k++)
		delete zoo[k];

	return 0;
}