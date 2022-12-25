/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:13:03 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/09 13:10:24 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <ctime>

class	Base{
	
	public:
		virtual ~Base();
};

class	A : public Base{

	
};

class	B : public Base{

	
};

class	C : public Base{

	
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
