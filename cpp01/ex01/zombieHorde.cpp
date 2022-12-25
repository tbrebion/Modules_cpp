/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 16:59:34 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/12 17:47:46 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name){

	int	i = 0;
	Zombie	*zombieHorde = new Zombie[N];

	while (i < N){

		zombieHorde[i].setName(name);
		zombieHorde[i].announce();		
		i++;
	}
	return (zombieHorde);
}
