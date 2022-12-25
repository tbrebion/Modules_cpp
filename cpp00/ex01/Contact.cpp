/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 13:00:51 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/11 14:49:21 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"
#include "Contact.hpp"

Contact::Contact(){
	
	return;
}

Contact::~Contact(){
	
	return;
}

void	Contact::set_first_name(std::string awnser){

	this->_first_name = awnser;	
	return;
}

void	Contact::set_last_name(std::string awnser){

	this->_last_name = awnser;	
	return;
}

void	Contact::set_nick_name(std::string awnser){

	this->_nick_name = awnser;	
	return;
}

void	Contact::set_phone_number(std::string awnser){

	this->_phone_number = awnser;	
	return;
}

void	Contact::set_secret(std::string awnser){

	this->_darkest_secret = awnser;	
	return;
}

std::string	Contact::get_info(int i){
	
	if (i == 0)
		return (this->_first_name);
	else if (i == 1)
		return (this->_last_name);
	else if (i == 2)
		return (this->_nick_name);
	else if (i == 3)
		return (this->_phone_number);
	else if (i == 4)
		return (this->_darkest_secret);
	return 0;
}
