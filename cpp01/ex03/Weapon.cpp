/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 12:11:05 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/13 12:25:26 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
	
	return;
}

Weapon::~Weapon(){
	
	return;
}

void	Weapon::setType(std::string str) {
	
	this->_type = str;
	return;
}

const std::string	&Weapon::getType() const{
	
	return (_type);
}
