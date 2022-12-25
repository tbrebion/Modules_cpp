/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumainB.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:08:12 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/13 16:41:15 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumainB.hpp"

HumainB::HumainB(std::string name) : _name(name), _wp(NULL){
	
	std::cout << _name << " is born" << std::endl;
	return;
}

HumainB::~HumainB(){

	std::cout << _name << " died" << std::endl;
	return;
}

void	HumainB::attack()const{

	if (_wp == NULL)
		std::cout << _name << " attack with nothing" << std::endl;
	else
		std::cout << _name << " attack with their " << _wp->getType() << std::endl;
	return;
}

void	HumainB::setWeapon(Weapon W){

	_wp = &W;
	return;
}
