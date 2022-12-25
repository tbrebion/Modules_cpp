/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:22:38 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/11 14:38:17 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACT_HPP
#define	CONTACT_HPP

#include "ex01.hpp"

class	Contact{
	
	public:
		Contact();
		~Contact();
		void	set_first_name(std::string awnser);
		void	set_last_name(std::string awnser);
		void	set_nick_name(std::string awnser);
		void	set_phone_number(std::string awnser);
		void	set_secret(std::string awnser);
		std::string	get_info(int i);
		
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif
