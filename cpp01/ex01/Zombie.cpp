/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:59:24 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/12 17:48:05 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){

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

void	Zombie::setName(std::string name){

	_name = name;
	return;
}
