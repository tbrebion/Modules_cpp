/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:18:50 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/27 14:26:11 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class	Cat : public virtual Animal{

	public:
		Cat();
		Cat(const Cat &cpy);
		~Cat();
		
		Cat	&operator=(const Cat &x);

		void	makeSound()const;
		
	private:
};

#endif
