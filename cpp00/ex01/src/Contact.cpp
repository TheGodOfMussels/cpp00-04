/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:15:49 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/08 16:15:50 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>

Contact::Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_nb, std::string secret)
{
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_nb = phone_nb;
    this->secret = secret;
}

Contact::Contact(void)
{
	return;
}

Contact::~Contact(void)
{
	return;
}

int	Contact::is_null(Contact contact)
{
	if (contact.first_name.empty())
		return (1);
	return (0);
}

void	Contact::print_param(Contact contact, int param)
{
	if (param == 1)
	{
		if (contact.first_name.size() > 10)
			std::cout << std::string(contact.first_name.begin(), contact.first_name.begin() + 9) << '.';
		else
			std::cout << std::setw(10) << contact.first_name;
	}
	if (param == 2)
	{
		if (contact.last_name.size() > 10)
			std::cout << std::string(contact.last_name.begin(), contact.last_name.begin() + 9) << '.';
		else
			std::cout << std::setw(10) << contact.last_name;
	}
	if (param == 3)
	{
		if (contact.nickname.size() > 10)
			std::cout << std::string(contact.nickname.begin(), contact.nickname.begin() + 9) << '.';
		else
			std::cout << std::setw(10) << contact.nickname;
	}
}

void	Contact::print_all_info(Contact contact)
{
	std::cout << "First name: " << contact.first_name << std::endl;
	std::cout << "Last name: " << contact.last_name << std::endl;
	std::cout << "Nickname: " << contact.nickname << std::endl;
	std::cout << "Phone number: " << contact.phone_nb << std::endl;
	std::cout << "Darkest secret: " << contact.secret << std::endl;
}