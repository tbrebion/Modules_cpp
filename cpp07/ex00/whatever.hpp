/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:52:42 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/11 14:07:28 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void	swap(T &ref1, T &ref2){

	T tmp = ref1;
	ref1 = ref2;
	ref2 = tmp;
	return;
}

template<typename T>
T	&min(T &ref1, T &ref2){
	
	return (ref1 < ref2 ? ref1 : ref2);
}

template<typename T>
T	&max(T &ref1, T &ref2){

	return (ref1 > ref2 ? ref1 : ref2);
}

#endif
