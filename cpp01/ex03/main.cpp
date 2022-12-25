/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:05:09 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/13 16:39:29 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumainA.hpp"
#include "HumainB.hpp"

int	main(){

////////////////////////////////////////

	Weapon saber("saber");
	
	HumainA Jim("Jim", saber);
	Jim.attack();
	saber.setType("knife");
	Jim.attack();

////////////////////////////////////////

	Weapon hamer("hamer");

	HumainB Bob("Bob");
	Bob.attack();
	Bob.setWeapon(hamer);
	Bob.attack();

////////////////////////////////////////

	return 0;
}
