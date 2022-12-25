/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:27:57 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/07 14:56:58 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <cstdlib>

class	Brain{

	public:
		Brain();
		Brain(const Brain &cpy);
		~Brain();

		const std::string &extractIdeas(int index)const;
		Brain	&operator=(const Brain &x);
		
	private:
		std::string	_ideas[100];
};


#endif
