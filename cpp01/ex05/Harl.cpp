/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:51:53 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/08 16:51:54 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "An Harl has appeared!" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl flew away!" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]   ";
	std::cout << "I love having extra bacon";
	std::cout << " for my 7XL-double-cheese-triple-pickle-special-ketchup burger.";
	std::cout << " I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]    ";
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn’t put enough bacon in my burger!";
	std::cout << " If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]    ";
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming for years";
	std::cout << " whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]    ";
	std::cout << "This is unacceptable!";
	std::cout << " I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*ptr_complain[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == list[i])
		{
			(this->*ptr_complain[i])();
			break;
		}
	}
}