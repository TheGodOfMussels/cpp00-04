/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:35:12 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/10 16:35:13 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void	test_1(void)
{
	ScavTrap	ugo("Ugo");

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
	ugo.guardGate();
}

void	test_2(void)
{
	ScavTrap	nepos("Nepos");

	while (nepos.get_hp())
	{
		nepos.takeDamage(20);
		nepos.beRepaired(10);
	}
	nepos.takeDamage(1);
	nepos.guardGate();
}

int	main(void)
{
	std::cout << "Test 1: " << std::endl << std::endl;
	test_1();
	std::cout << std::endl;
	std::cout << "Test 2: " << std::endl << std::endl;
	test_2();
}