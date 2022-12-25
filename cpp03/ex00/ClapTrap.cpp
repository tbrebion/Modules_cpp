/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:51:08 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/26 15:32:36 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("DEFAULT"), _hitPoints(10), _energyPoints(10), _attackDamage(0){

	std::cout << _name << " has been created" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){

	std::cout << _name << " has been created" << std::endl;
	return;
}

ClapTrap::~ClapTrap(){

	std::cout << _name << "'s destruction" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &cpy){

	std::cout << "Copy constructor called" << std::endl;
	(*this) = cpy;
	return;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &x){

	this->_name = x._name;
	this->_hitPoints = x._hitPoints;
	this->_energyPoints = x._energyPoints;
	this->_attackDamage = x._attackDamage;
	std::cout << "copy operator called" << std::endl;
	return (*this);
}

void	ClapTrap::attack(const std::string &target){

	if (this->_energyPoints > 0 && this->_hitPoints > 0){

		std::cout << this->_name << " attack " << target << " causing " << this->_attackDamage << " points of damage" << std::endl;
		this->_energyPoints--;
	}
	else{

		std::cout << "Not enough energy points or hit points to attack" << std::endl;
	}
	return;
}

void	ClapTrap::takeDamage(unsigned int amount){

	std::cout << this->_name << " take " << amount << " of damage" << std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0){
		
		this->_hitPoints = 0;
	}
	return;
}

void	ClapTrap::beRepaired(unsigned int amount){

	if (this->_energyPoints > 0 && this->_hitPoints > 0){
		
		std::cout << this->_name << " repairs of " << amount << " hit points" << std::endl; 
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else{

		std::cout << "Not enough energy points or hit points to repaire" << std::endl;
	}
	return;
}
