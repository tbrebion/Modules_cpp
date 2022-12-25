/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:51:52 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/14 14:22:25 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(){

	std::list<int> lst(10);

	for (int i = 0; i < 10; i++){

		lst.push_back(i);
	}	
	std::cout << "Container range = 0-9" << std::endl;
	std::cout << "Easyfind for 8  : " << easyfind(lst, 8) << std::endl;
	std::cout << "Easyfind for 9  : " << easyfind(lst, 9) << std::endl;
	std::cout << "Easyfind for 10 : " << easyfind(lst, 10) << std::endl;
	std::cout << "Easyfind for 0  : " << easyfind(lst, 0) << std::endl;
	std::cout << "Easyfind for -1 : " << easyfind(lst, -1) << std::endl;
	std::cout << "Easyfind for -1 : " << easyfind(lst, 12) << std::endl;

	return (0);
}
