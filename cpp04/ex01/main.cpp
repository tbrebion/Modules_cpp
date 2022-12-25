/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:27:52 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/07 15:02:09 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int	main(){

	const Animal	*CatsAndDogs[100];

	for(int i = 0; i < 100; i++){

		if (i % 2){
			
			CatsAndDogs[i] = new Cat();
		}
		else{

			CatsAndDogs[i] = new Dog();			
		}
	}
	for (int j = 0; j < 100; j++){

		CatsAndDogs[j]->makeSound();
		// CatsAndDogs[j]->extractIdeas();
	}
	for (int k = 0; k < 100; k++){

		delete CatsAndDogs[k];
	}	
	
	return (0);
}
