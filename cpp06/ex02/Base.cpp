/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:12:58 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/09 13:07:39 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){

	return;
}

Base	*generate(void){

	Base	*ptr;
	int 	rand;
	
	rand = std::time(NULL);
	if (rand % 3 == 0){

		ptr = new A;
	}
	else if (rand % 4 == 0){

		ptr = new B;
	}
	else{

		ptr = new C;
	}
	return (ptr);
}

void	identify(Base *p){

	if (dynamic_cast<A*>(p) != 0){

		std::cout << "Class A detected" << std::endl;
	}
	else if (dynamic_cast<B*>(p) != 0){

		std::cout << "Class B detected" << std::endl;
	}
	else if (dynamic_cast<C*>(p) != 0){

		std::cout << "Class C detected" << std::endl;
	}
	return;
}

void	identify(Base &p){

	try{
		
		(void)dynamic_cast<A&>(p);
		std::cout << "Class A detected" << std::endl;
	}
	catch(std::exception &e){}
	try{
		
		(void)dynamic_cast<B&>(p);
		std::cout << "Class B detected" << std::endl;
	}
	catch(std::exception &e){}
	try{
		
		(void)dynamic_cast<C&>(p);
		std::cout << "Class C detected" << std::endl;
	}
	catch(std::exception &e){}

	return;
}

