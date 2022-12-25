/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:10:20 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/12 16:31:42 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){

	std::cout << "Zombie " << _name << " created" << std::endl;
	return;
}

Zombie::~Zombie(){
	
	std::cout << "Zombie " << _name << " destroyed" << std::endl;
	return;	
}

void	Zombie::announce(void) const{
	
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;	
}
