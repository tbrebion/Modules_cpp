/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:12:50 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/27 16:17:30 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public virtual WrongAnimal{

	public:
		WrongCat();
		WrongCat(const WrongCat &cpy);
		~WrongCat();
		
		WrongCat	&operator=(const WrongCat &x);

		void	makeSound()const;
		
	private:
};

#endif

