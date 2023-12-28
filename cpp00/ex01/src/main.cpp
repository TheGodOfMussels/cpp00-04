/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:15:54 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/08 16:15:55 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

int	main()
{
	std::string	cmd;
	PhoneBook	phoneb;

	int	i;

	i = 0;
	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, cmd);
		if (cmd == "EXIT")
		{
			std::cout << "Are you sure to exit the program? All the current contacts will be removed! (Y/N): ";
			std::getline(std::cin, cmd);
			if (cmd == "Y")
				break;
		}
		else if (cmd == "ADD")
		{
			i = phoneb.contacts_nb(phoneb);
			if (i > 7)
			{
				i = -2;
				while (i == -2)
				{
					std::cout << "Maximum number of contacts reached, the oldest contact will be deleated. Continue? (Y/N)";
					std::getline(std::cin, cmd);
					if (cmd == "Y")
					{
						phoneb = phoneb.del_oldest(phoneb);
						i = 7;
					}
					else if (cmd == "N")
						i = -1;
					else
						std::cout << "Not valid entrance! try again.\n";
				}
			}
			if (i >= 0)
				phoneb = phoneb.add_contact(phoneb, i);
		}
		else if (cmd == "SEARCH")
			phoneb.show_list(phoneb);
		else if (cmd.empty())
            		continue ;
        	else
           		std::cout << "Not a valid command! Try again" << std::endl;
	}
	return 0;
}