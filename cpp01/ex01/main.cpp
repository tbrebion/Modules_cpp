/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:59:03 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/12 18:12:35 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(){

	Zombie	*horde;
	
	horde = zombieHorde(5, "Jim");
	
	delete[] horde;
	return 0;
}