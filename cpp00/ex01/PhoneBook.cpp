/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:13:09 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/11 16:58:18 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(){
	
	this->_index = 0;
	this->_c_num = 0;
	return;
}

PhoneBook::~PhoneBook(){
	
	return;
}

void	PhoneBook::menu(){
	
	std::string	cmd;
	
	while(1){
		
		std::cout << "what do you want : ";
		std::getline(std::cin, cmd);		
		if (std::cin.eof())
			break;
		if (cmd == "ADD")
		{
			std::cout << std::endl;
			this->add();
			this->_c_num += 1;
			if (this->_c_num >= 8)
				this->_c_num = 8;
			continue;	
		}
		else if (cmd == "SEARCH")
		{
			std::cout << std::endl;
			this->search();
			continue;
		}
		else if (cmd == "EXIT")
		{
			std::cout << std::endl;
			std::cout << "BYE" << std::endl;				
			break;
		}
		else
		{
			std::cout << std::endl;		
			std::cout << "INVALID CMD !" << std::endl;
			std::cout << std::endl;			
			continue;
		}
		std::cout << std::endl;
	}
	return;
}

void	PhoneBook::search(){

	std::string	str;
	int	index;
	
	if (this->_c_num == 0){
		
		std::cout << "NO CONTACT RECORDED !" << std::endl;
		std::cout << std::endl;			
		return;
	}
	std::cout << "     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	for(int j = 0; j < this->_c_num; j++){
			
		std::cout << std::right << std::setw(10) << j + 1 << "|";
		for (int i = 0; i < 3; i++){
			str = this->_book[j].get_info(i);
			if (str.length() > 10)
				str = str.substr(0, 9) + '.';				
			std::cout << std::right << std::setw(10) << str << "|";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	while (1){
		std::cout << "Which one ?" << std::endl;
		std::cout << std::endl;
		std::getline(std::cin, str);
		if (std::cin.eof()){
			this->~PhoneBook();
			std::exit(EXIT_FAILURE);
		}
		if (str.length() > 1 || str[0] < '1' || std::atoi(str.c_str()) > this->_c_num){
			std::cout << std::endl;
			std::cout << "NOT A CONTACT !" << std::endl;
			std::cout << std::endl;			
			continue;
		}
		break;
	}
	std::cout << std::endl;
	index = std::atoi(str.c_str()) - 1;
	for (int i = 0; i < 5; i++)
		std::cout << this->_book[index].get_info(i) << std::endl;
	std::cout << std::endl;
	return;
}

void	PhoneBook::add(){
	
	std::string	info;
	
	if (this->_index == 8)
		this->_index = 0;
	while(1)
	{
		std::cout << "First name : ";
		std::getline(std::cin, info);
		if (std::cin.eof()){
			this->~PhoneBook();
			std::exit(EXIT_FAILURE);
		}
		if (info[0] == '\0' || only_white_space(info))
			continue;
		PhoneBook::_book[this->_index].set_first_name(info);
		std::cout << std::endl;
		break;
	}	
	while(1)
	{
		std::cout << "Last name : ";		
		std::getline(std::cin, info);
		if (std::cin.eof()){
			this->~PhoneBook();
			std::exit(EXIT_FAILURE);
		}
		if (info[0] == '\0' || only_white_space(info))
			continue;
		PhoneBook::_book[this->_index].set_last_name(info);
		std::cout << std::endl;
		break;
	}	
	while(1)
	{
		std::cout << "Nick name : ";		
		std::getline(std::cin, info);
		if (std::cin.eof()){
			this->~PhoneBook();
			std::exit(EXIT_FAILURE);
		}
		if (info[0] == '\0' || only_white_space(info))
			continue;
		PhoneBook::_book[this->_index].set_nick_name(info);
		std::cout << std::endl;
		break;
	}
	while(1)
	{
		std::cout << "Phone number : ";		
		std::getline(std::cin, info);
		if (std::cin.eof()){
			this->~PhoneBook();
			std::exit(EXIT_FAILURE);
		}
		if (info[0] == '\0' || only_white_space(info))
			continue;
		PhoneBook::_book[this->_index].set_phone_number(info);
		std::cout << std::endl;
		break;
	}
	while(1)
	{
		std::cout << "Darkest secret : ";		
		std::getline(std::cin, info);
		if (std::cin.eof()){
			this->~PhoneBook();
			std::exit(EXIT_FAILURE);
		}
		if (info[0] == '\0' || only_white_space(info))
			continue;
		PhoneBook::_book[this->_index].set_secret(info);
		std::cout << std::endl;
		break;
	}
	std::cout << "CONTACT ADDED !" << std::endl;
	std::cout << std::endl;
	this->_index += 1;
	return;
}
