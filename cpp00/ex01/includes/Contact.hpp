/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:15:35 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/08 16:15:39 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_nb;
	std::string	secret;
public:
	Contact();
	~Contact();

	Contact(std::string first_name, std::string last_name, std::string nickname, std::string phone_nb, std::string secret);
	int	is_null(Contact	contact);
	void	print_param(Contact contact, int param);
	void	print_all_info(Contact contact);
};

#endif