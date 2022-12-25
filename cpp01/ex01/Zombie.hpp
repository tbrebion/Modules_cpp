/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:57:41 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/12 17:46:37 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define	ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie{
	
	public:
		Zombie();
		~Zombie();
		void	setName(std::string name);
		void	announce(void) const;
		
	private:
		std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
