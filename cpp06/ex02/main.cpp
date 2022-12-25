/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 12:13:01 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/11 18:10:58 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main(){

	Base	*uno = generate();
	Base	*dos = generate();

	identify(uno);
	identify(*dos);
	
	delete uno;
	delete dos;
	
	return (0);
}
