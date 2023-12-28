/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:44:46 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/08 16:44:47 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <algorithm>

class Zombie
{
private:
	std::string	name;
public:
	Zombie(std::string name);
	Zombie(void);
	~Zombie();

	void	announce(void);
	void	setName(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);
Zombie	*newZombie(std::string	name);
void	randomChump(std::string	name);

#endif