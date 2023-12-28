/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:15:59 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/08 16:15:59 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

std::string	add_param(std::string prompt)
{
	std::string	param;

	std::cout << prompt;
	while (1)
	{
		std::getline(std::cin, param);
		if (param.empty())
			std::cout << "Empty field! Please insert a valid field!" << std::endl;
		else
			break;			
	}
	return (param);
}

int isnum(std::string s, int i)
{
    if (s.size() != 1)
        return (0);
    if (48 <= s[0] && s[0] <= 48 + i)
        return (1);
    return (0);
}

PhoneBook	PhoneBook::add_contact(PhoneBook phoneb, int i)
{
	Contact	new_one(add_param("First name: "), add_param("Last name: "), 
			add_param("Nickname: "), add_param("Phone number: "), 
			add_param("Secret: "));

	phoneb.contacts[i] = new_one;
	return (phoneb);	
}

int	PhoneBook::contacts_nb(PhoneBook phoneb)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		if (phoneb.contacts[i].is_null(phoneb.contacts[i]))
			break;
		i++;
	}
	return (i);
}

PhoneBook	PhoneBook::del_oldest(PhoneBook phoneb)
{
	int	i;

	i = 0;
	while (i < 7)
	{
		phoneb.contacts[i] = phoneb.contacts[i + 1];
		i++;
	}
	return (phoneb);
}

void	PhoneBook::show_list(PhoneBook phoneb)
{
	int	i;
	int	max;
	std::string	index;

	i = 0;
	if (phoneb.contacts[0].is_null(phoneb.contacts[0]))
	{
		std::cout << "Your phonebook is empty!" << std::endl;
		return ;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|" << "First name|" << " Last name|" << "  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	while (i < 8)
	{
		if (phoneb.contacts[i].is_null(phoneb.contacts[i]))
			break ;
		std::cout << "|" << std::setw(10) << i << "|";
		contacts[i].print_param(contacts[i], 1);
		std::cout << "|";
		contacts[i].print_param(contacts[i], 2);
		std::cout << "|";
		contacts[i].print_param(contacts[i], 3);
		std::cout << "|\n";
		std::cout << "|-------------------------------------------|" << std::endl;
		i++;
	}
	max = i - 1;
	while (1)
	{
		std::cout << "Select the index for complete info:";
		std::getline(std::cin, index);
		if (index.empty())
			continue;
		if (isnum(index, max))
			i = (int)index[0] - 48;
		else
		{
            		std::cout << "Please enter a valid number!" << std::endl;
            		continue;
        	}
		phoneb.contacts[i].print_all_info(phoneb.contacts[i]);
		break ;
	}
}