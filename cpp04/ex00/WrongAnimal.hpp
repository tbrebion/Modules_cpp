/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:15:42 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/27 16:17:08 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal{

	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &cpy);
		virtual ~WrongAnimal();

		std::string	getType()const;
		void		setType(std::string type);

		WrongAnimal	&operator=(const WrongAnimal &x);
		
		void makeSound()const;
		
	protected:
		std::string	_type;

	private:
};

#endif
