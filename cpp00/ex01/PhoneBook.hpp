/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:18:11 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/11 14:45:57 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONE_BOOK_HPP
#define	PHONE_BOOK_HPP

#include "ex01.hpp"
#include "Contact.hpp"

class	PhoneBook{

	public:
		PhoneBook();
		~PhoneBook();
		void	menu();
		void	add();
		void	search();
	private:
		Contact _book[8];
		int		_index;
		int		_c_num;
};

#endif
