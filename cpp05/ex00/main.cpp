/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:52:35 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/31 10:57:20 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(){
	
	std::cout << "Create 2 random bureaucrat" << std::endl;
	Bureaucrat test("RandomBureaucrat1", 150);
	Bureaucrat test2("RandomBureaucrat2", 1);
	std::cout << "Try to cross the minimum rank with RandomBureaucrat1" << std::endl;
	test.operator--();
	std::cout << "Try to cross the maximum rank with RandomBureaucrat2" << std::endl;
	test2.operator++();
	std::cout << test << std::endl;
	std::cout << test2 << std::endl;

	return (0);	
}
