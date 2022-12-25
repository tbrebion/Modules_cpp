/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:51:03 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/26 14:21:40 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class	ClapTrap{

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hitpoints, int energypoints, int attackdamage);
		ClapTrap(const ClapTrap &cpy);
		virtual ~ClapTrap();
		
		ClapTrap	&operator=(const ClapTrap &x);
		
		virtual void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
	protected:
		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		
	private:
};

#endif
