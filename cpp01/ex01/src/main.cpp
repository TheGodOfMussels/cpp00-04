/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:44:56 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/08 16:44:57 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	size_horde;

	size_horde = 15;
	Zombie	*horde = zombieHorde(size_horde, "Bruh");
	for (int i = 0; i < size_horde; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}