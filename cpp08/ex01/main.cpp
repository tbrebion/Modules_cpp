/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:26:30 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/16 17:40:09 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(){

	{
		Span sp = Span(100);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	
	{
		Span	sp(1);
	
		sp.addNumber(12);
	
		try{
			
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(std::exception &e){
		
			std::cout << e.what() << std::endl;
		}
		try{
			
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(std::exception &e){
		
			std::cout << e.what() << std::endl;
		}
	}
	
	{
		std::vector<int> vec;
		Span	sp(10000);

		for(int i = 0; i < 10000; i++){

			vec.push_back(i);
		}
		sp.fillRange<std::vector<int> >(vec.begin(), vec.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.printLst();
	}
	
	return (0);
}
