/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumainA.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:08:04 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/13 15:44:50 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumainA.hpp"

HumainA::HumainA(std::string name, Weapon &W) : _name(name) , _wp(W){
	
	std::cout << _name << " is born" << std::endl; 
	return;
}

HumainA::~HumainA(){
	
	std::cout << _name << " died" << std::endl; 
	return;
}

void	HumainA::attack()const{
	
	std::cout << _name << " attack with their " << _wp.getType() << std::endl;
	return;
}
