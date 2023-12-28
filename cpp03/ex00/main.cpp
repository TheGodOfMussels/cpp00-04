/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:15:15 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/10 16:15:16 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void	test_1(void)
{
	ClapTrap	ugo("Ugo");

	ugo.attack("Ursula");
	ugo.attack("Mario");
	ugo.attack("Carlo");
	ugo.attack("Pietro");
	ugo.attack("Luca");
	ugo.attack("John");
	ugo.attack("Levi");
	ugo.attack("Dario");
	ugo.attack("Alex");
	ugo.attack("Franco");
	ugo.attack("Bruno");
}

void	test_2(void)
{
	ClapTrap	nepos("Nepos");

	while (nepos.get_hp())
	{
		nepos.takeDamage(2);
		nepos.beRepaired(2);
	}
	nepos.takeDamage(1);
}

int	main(void)
{
	std::cout << "Test 1: " << std::endl << std::endl;
	test_1();
	std::cout << std::endl;
	std::cout << "Test 2: " << std::endl << std::endl;
	test_2();
}