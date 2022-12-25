/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumainB.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:08:16 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/13 15:54:15 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAINB_HPP
#define HUMAINB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumainB{

	public:
		HumainB(std::string name);
		~HumainB();
		void	attack()const;
		void	setWeapon(Weapon W);
	
	private:
		std::string	_name;
		Weapon	*_wp;
};

#endif
