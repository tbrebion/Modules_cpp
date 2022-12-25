/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:51:55 by tbrebion          #+#    #+#             */
/*   Updated: 2022/11/14 14:09:35 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>
#include <algorithm>
#include <numeric>

template<typename T>
bool	easyfind(T arg1 ,int arg2){

	return (std::find(arg1.begin(), arg1.end(), arg2) != arg1.end() ? true : false);
}

#endif
