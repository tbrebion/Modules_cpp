/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:11:31 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/11 18:01:03 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(){

	Array<char>	Arr(6);
	char j = 'a';

	for (unsigned int i = 0; i < Arr.size(); i++){

		Arr[i] = j;
		j++;
	}

	for (unsigned int i = 0; i < Arr.size(); i++){

		std::cout << Arr[i] << std::endl;
	}

/* ############################################################# */

	std::cout << std::endl << std::endl;
	
	try{
		
		std::cout << Arr[Arr.size()] << std::endl;
	}
	catch(std::exception &e){
		
		std::cout << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	
	try{
		
		std::cout << Arr[-1] << std::endl;
	}
	catch(std::exception &e){
		
		std::cout << e.what() << std::endl;
	}

/* ############################################################# */

	std::cout << std::endl << std::endl;
	
	Array<char>	Arr2(Arr);

	
	for (unsigned int i = 0; i < Arr2.size(); i++){

		std::cout << Arr2[i] << std::endl;
	}
	
/* ############################################################# */

	std::cout << std::endl << std::endl;
	
	Array<char>	Arr3 = Arr2;
	
	for (unsigned int i = 0; i < Arr3.size(); i++){

		std::cout << Arr3[i] << std::endl;
	}
	
	return (0);
}
