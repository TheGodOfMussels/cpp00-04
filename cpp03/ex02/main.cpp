/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:35:46 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/10 16:35:46 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void	test_1(void)
{
	FragTrap	ugo("Ugo");

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
	ugo.highFiveGuys();
}

void	test_2(void)
{
	FragTrap	nepos("Nepos");

	while (nepos.get_hp())
	{
		nepos.takeDamage(20);
		nepos.beRepaired(10);
	}
	nepos.takeDamage(1);
	nepos.highFiveGuys();
}

int	main(void)
{
	std::cout << "Test 1: " << std::endl << std::endl;
	test_1();
	std::cout << std::endl;
	std::cout << "Test 2: " << std::endl << std::endl;
	test_2();
}