/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:48:23 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/04 12:47:18 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(){

	ScavTrap	Toc("Toc");
	
	Toc.guardGate();
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");
	Toc.attack("someone else");

	ScavTrap	Tac(Toc);

	std::cout << std::endl;
	Tac.attack("someone");

	ScavTrap	Tic = Toc;
	Tic.attack("someone");

	return (0);
}
