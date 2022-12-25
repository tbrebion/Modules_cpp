/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:37:08 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/12 19:00:46 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(){

	std::string	str = "HI THIS IS BRAIN";
	std::string	*ptr = &str;
	std::string	&ref = str;

	std::cout << "Address of str : " << &str << std::endl;
	std::cout << "Address saved in ptr : " << ptr << std::endl;
	std::cout << "Address saved in ref : " << &ref << std::endl << std::endl;

	std::cout << "Value of str : " << str << std::endl;
	std::cout << "value pointed by ptr : " << *ptr << std::endl;
	std::cout << "value pointed by ref : " << ref << std::endl;
	return 0;
}
