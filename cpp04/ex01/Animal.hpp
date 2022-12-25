/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:00:58 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/28 16:16:19 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class	Animal{

	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal &cpy);
		virtual ~Animal();

		std::string	getType()const;
		void		setType(std::string type);

		Animal	&operator=(const Animal &x);
		
		virtual void makeSound()const;
		virtual void extractIdeas()const;
		
	protected:
		std::string	_type;

	private:
};

#endif
