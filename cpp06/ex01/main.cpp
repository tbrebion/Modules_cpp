/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:34:23 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/11 18:10:30 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(){

	uintptr_t	raw;
	Data		*ptr = new Data;
	Data		*new_ptr;

	ptr->a = 2147483647;
	ptr->b = 'A';
	ptr->c = 42.0f;

	raw = serialize(ptr);
	new_ptr = deserialize(raw);

	std::cout << "ptr =>      " << ptr->a << " " << ptr->b << " " << ptr->c << " " << std::endl;	
	std::cout << "new ptr =>  " << new_ptr->a << " " << new_ptr->b << " " << new_ptr->c << " " << std::endl;	
	std::cout << "ptr =>	    " << ptr << std::endl;
	std::cout << "new ptr =>  " << new_ptr << std::endl;

	delete ptr;
	
	return (0);
}
