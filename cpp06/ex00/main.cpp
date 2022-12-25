/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:58:11 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/08 17:08:14 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

int	main(int ac, char **av){

	if (ac == 2){

		try{
			
			std::string str = av[1];
			ScalarConversion scalar(str);
			scalar.launchConversion();
		}
		catch(std::exception &e){

			std::cout << e.what() << std::endl;
		}
	}
	else{

		std::cout << "ERROR ARGS" << std::endl;
	}

	return (0);
}
