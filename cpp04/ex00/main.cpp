/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:09:59 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/07 14:33:46 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* r = new Cat();
	const WrongAnimal* i = new WrongCat();
	
	std::cout << std::endl << std::endl;
	
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << r->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	std::cout << std::endl << std::endl;
	
	meta->makeSound();
	j->makeSound();
	r->makeSound();
	i->makeSound();
	
	std::cout << std::endl << std::endl;
	
	delete meta;
	delete j;
	delete r;
	delete i;
	
	return (0);
}
