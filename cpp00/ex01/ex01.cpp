/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:27:59 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/11 15:34:00 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

int	only_white_space(std::string str){
	
	for (int i = 0; i < (int)str.length(); i++){

		if (str[i] == ' ' || str[i] == '\t')
			i++;
		else
			return 0;
	}
	return 1;
}
