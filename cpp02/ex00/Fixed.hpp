/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:39:11 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/21 16:55:29 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed{

	public:
		Fixed();
		Fixed(const Fixed &x);
		~Fixed();
		Fixed &operator=(const Fixed &x);
		int		getRawBits()const;
		void	setRawBits(int const raw);

	private:
		int	_n;
		static const int _b = 8;
};

#endif
