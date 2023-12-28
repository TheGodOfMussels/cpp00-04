/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:48:32 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/08 16:48:33 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon	&_weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack(void);
	void	setWeapon(Weapon weapon);
};
