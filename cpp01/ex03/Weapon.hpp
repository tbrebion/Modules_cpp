/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:11:10 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/13 12:24:52 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
#define	WEAPON_HPP

#include <iostream>
#include <string>

class	Weapon{
	
	public:
		Weapon(std::string type);
		~Weapon();
		void	setType(std::string str);
		const std::string	&getType() const;
		
	private:
		std::string	_type;
};

#endif
