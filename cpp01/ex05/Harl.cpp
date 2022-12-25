/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 16:20:01 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/20 14:21:43 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	
	return;
}

Harl::~Harl(){

	return;
}

void	Harl::_debug(){

	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	return;
}

void	Harl::_info(){

	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	return;
}

void	Harl::_warning(){

	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return;
}

void	Harl::_error(){

	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return;
}

void	Harl::complain(std::string level){
	
	static const char *levels[] = {
		"DEBUG", "INFO", "WARNING", "ERROR", NULL
	};
	void	(Harl::*fctnPtr[4])(void) = {
		
		&Harl::_debug,
		&Harl::_info,
		&Harl::_warning,
		&Harl::_error,
	};
	for (int i = 0; i < 4; i++){
		
		if (level == levels[i]){

			(this->*fctnPtr[i])();
			return;
		}
	}
	return;
}
