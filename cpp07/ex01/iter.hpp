/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:17:47 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/11 15:52:35 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void	incrPtr(T &ptr){

	ptr += 1;
	return;
}

template<typename T>
void	iter(T tab[], const size_t &len, void(*incrPtr)(T &ptr)){

	for (size_t i = 0; i < len; i++){

		(*incrPtr)(tab[i]);
	}
	return;
}

#endif
