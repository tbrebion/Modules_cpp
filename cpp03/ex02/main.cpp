/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 15:17:01 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/26 15:57:14 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(){

	ClapTrap	Tic("Tic");

	Tic.attack("Tac");
	
	std::cout << std::endl << std::endl;

	ScavTrap	Tac("Tac");

	Tac.attack("Toc");

	std::cout << std::endl << std::endl;
	
	FragTrap	Toc("Toc");

	Toc.attack("Tic");

	std::cout << std::endl << std::endl;
	
	return (0);
}
