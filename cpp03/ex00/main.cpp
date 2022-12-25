/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:50:59 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/26 14:00:29 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(){

	ClapTrap Clap("Clap");

	Clap.attack("Trap");
	Clap.attack("Trap");
	Clap.beRepaired(10);
	Clap.takeDamage(18);
	Clap.attack("Trap");
	Clap.takeDamage(2);
	Clap.attack("Trap");
	
	ClapTrap Clip(Clap);
	
	Clip.attack("Tok");
	
	ClapTrap Clop = Clip;
	
	Clop.attack("Tik");
	
	return (0);
}
