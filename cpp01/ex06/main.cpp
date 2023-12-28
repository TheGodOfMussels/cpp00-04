/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:52:21 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/08 16:53:24 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	harl_filter(char *av)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == av)
			return (i);
	}
	return (-1);
}

void	harl_switch(char *av, Harl *h)
{
	switch (harl_filter(av))
	{
		case 0:
			h->complain("DEBUG");
			h->complain("INFO");
			h->complain("WARNING");
			h->complain("ERROR");
			break;
		case 1:
			h->complain("INFO");
			h->complain("WARNING");
			h->complain("ERROR");
			break;
		case 2:
			h->complain("WARNING");
			h->complain("ERROR");
			break;
		case 3:
			h->complain("ERROR");
			break;
	
		default:
			std::cout << "[ Complaining about insignificant problem!! ]" << std::endl;
	}
}

int	main(int ac, char **av)
{
	Harl	h;

	if (ac != 2)
		std::cout << "[ Complaining about insignificant problem!! ]" << std::endl;
	else
		harl_switch(av[1], &h);
	return (0);
}