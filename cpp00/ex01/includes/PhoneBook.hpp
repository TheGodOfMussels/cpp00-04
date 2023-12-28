/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:15:43 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/08 16:15:45 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[9];
public:
	PhoneBook();
	~PhoneBook();

	PhoneBook	add_contact(PhoneBook phoneb, int i);
	int	contacts_nb(PhoneBook phoneb);
	PhoneBook	del_oldest(PhoneBook phoneb);
	void	show_list(PhoneBook phoneb);
};

#endif