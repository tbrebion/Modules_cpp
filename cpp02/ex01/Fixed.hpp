/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:47:31 by tbrebion          #+#    #+#             */
/*   Updated: 2022/10/24 14:41:08 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed{

	public:
		Fixed();
		Fixed(const Fixed &x);
		Fixed(const int val);
		Fixed(const float val);
		~Fixed();
		int		getRawBits()const;
		void	setRawBits(int const raw);
		float	toFloat()const;
		int		toInt()const;
		Fixed &operator=(const Fixed &x);

	private:
		int	_value;
		static const int _bits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &x);

#endif
