/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:30:43 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/27 14:42:01 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class	Dog : public virtual Animal{

	public:
		Dog();
		Dog(const Dog &cpy);
		~Dog();

		Dog	&operator=(const Dog &x);
		
		void	makeSound()const;
		
	private:
};

#endif
