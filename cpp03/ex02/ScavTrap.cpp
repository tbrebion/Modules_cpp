/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:29:19 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/04 12:48:01 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("UKNOWN", 100, 50, 20){
	
	std::cout << "Default ScavTrap created" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20){
	
	std::cout << "ScavTrap " << _name << " created" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &cpy)
: ClapTrap(cpy._name, cpy._hitPoints, cpy._energyPoints, cpy._attackDamage){

	std::cout << "ScavTrap copy constructor called" << std::endl;
	return;
}

ScavTrap::~ScavTrap(){

	std::cout << "ScavTrap " << _name << " has been destroyed" << std::endl;
	return;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &x){
	
	this->_name = x._name;
	this->_hitPoints = x._hitPoints;
	this->_energyPoints = x._energyPoints;
	this->_attackDamage = x._attackDamage;
	std::cout << "copy operator called" << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string &target){

	std::cout << "I'm ScavTrap " << _name << " : ";
	this->ClapTrap::attack(target);
	return;
}

void	ScavTrap::guardGate(){

	std::cout << "ScavTrap is know in gate keeper mode" << std::endl;
	return;
}
