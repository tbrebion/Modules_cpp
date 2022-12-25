/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:09:33 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/12 16:52:08 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){

	randomChump("Tic");
	std::cout << std::endl;
	randomChump("Tac");
	std::cout << std::endl;
	randomChump("Toc");
	
	std::cout << std::endl;
	std::cout << std::endl;

	Zombie	*ptr;
	ptr = newZombie("Lamala");
	ptr->announce();
	delete ptr;
	
	return 0;
}
