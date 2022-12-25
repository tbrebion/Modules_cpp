/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:17:33 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/11 15:53:05 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(){

	int test1[] = {0, 0, 0, 0, 0, 0};
	
	std::cout << "Array before iter :" << std::endl;
	for (int i = 0; i < 6; i++)
    {
        std::cout << test1[i] << std::endl;
    }
    iter(test1, 6, &incrPtr);
    std::cout << "Array after iter :" << std::endl;
    for (int i = 0; i < 6; i++)
    {
        std::cout << test1[i] << std::endl;
    }
    
    std::cout << std::endl << std::endl;
    
	char test2[] = {'a', 'a', 'a', 'a', 'a', 'a'};
    
	std::cout << "Array before iter :" << std::endl;
	for (int i = 0; i < 6; i++)
    {
        std::cout << test2[i] << std::endl;
    }
    iter(test2, 6, &incrPtr);
    std::cout << "Array after iter :" << std::endl;
    for (int i = 0; i < 6; i++)
    {
        std::cout << test2[i] << std::endl;
    }	
    
	return (0);
}
