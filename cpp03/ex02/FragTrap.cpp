/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:38:21 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/04 12:48:05 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("UKNOWN", 100, 100, 30){

	std::cout << "Default FragTrap created" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30){

	std::cout << "FragTrap " << _name << " created" << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &cpy)
: ClapTrap(cpy._name, cpy._hitPoints, cpy._energyPoints, cpy._attackDamage){

	std::cout << "FragTrap constructor copy called" << std::endl;
	return;
}

FragTrap::~FragTrap(){
	
	std::cout << "FragTrap " << _name << " has been destroyed" << std::endl;
	return;
}

FragTrap	&FragTrap::operator=(const FragTrap &x){

	this->_name = x._name;
	this->_hitPoints = x._hitPoints;
	this->_energyPoints = x._energyPoints;
	this->_attackDamage = x._attackDamage;
	std::cout << "copy operator called" << std::endl;
	return (*this);
}

void	FragTrap::attack(const std::string &target){

	std::cout << "I'm FragTrap " << _name << " : ";
	this->ClapTrap::attack(target);
	return;
}

void	FragTrap::highFivesGuys(){

	std::cout << "High fives Guys" << std::endl;
	return;
}
