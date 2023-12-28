/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dimolin2 <dimolin2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:41:58 by dimolin2          #+#    #+#             */
/*   Updated: 2023/11/15 16:41:58 by dimolin2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP

# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria	*_inventory[4];
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource &copy);
	~MateriaSource(void);

	MateriaSource	&operator=(const MateriaSource &copy);

	void	learnMateria(AMateria*);
	AMateria*	createMateria(std::string const &type);
};

#endif