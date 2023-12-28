/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:40:32 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/15 16:40:33 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

# define BRAIN_HPP

# include <iostream>

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain(void);
	~Brain(void);
	Brain(const Brain &copy);

	Brain	&operator=(const Brain &copy);
};

#endif