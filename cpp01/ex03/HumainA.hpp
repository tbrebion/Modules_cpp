/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumainA.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:08:09 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/13 15:44:29 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAINA_HPP
#define HUMAINA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumainA{

	public:
		HumainA(std::string name, Weapon &W);
		~HumainA();
		void	attack()const;
	
	private:
		std::string	_name;
		Weapon	&_wp;
};


#endif
